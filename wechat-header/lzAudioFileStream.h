//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KSAudioFileProtocol-Protocol.h"

@class KSAudioDataProvider, NSArray, NSData, NSMutableArray, NSMutableData, NSString;

@interface lzAudioFileStream : NSObject <KSAudioFileProtocol>
{
    _Bool _bEof;
    _Bool _readyToProducePackets;
    _Bool _disContinuous;
    _Bool _isOpened;
    _Bool _needCalculateByProcessedPackets;
    unsigned int _averageBytesPerSecond;
    unsigned int _maxPacketSize;
    unsigned int _outputSizePerPacket;
    unsigned int _audioDataBitRate;
    KSAudioDataProvider *_audioDataProvider;
    struct OpaqueAudioFileStreamID *_fileStreamID;
    long long _fileReadOffset;
    double _fileDurion;
    long long _curPacketOffset;
    struct OpaqueAudioConverter *_audioConverter;
    NSArray *_audioFileTypes;
    unsigned long long _audioDataOffset;
    unsigned long long _audioDataByteCount;
    unsigned long long _audioDataPacketCount;
    NSMutableArray *_audioPackets;
    NSMutableData *_inputData;
    struct AudioStreamPacketDescription *_inputDesc;
    unsigned long long _processedPacketsCount;
    unsigned long long _processedPacketsSizeTotal;
    double _packetDuraion;
    struct AudioStreamBasicDescription _fileFormat;
}

- (void).cxx_destruct;
@property(nonatomic) struct OpaqueAudioConverter *audioConverter; // @synthesize audioConverter=_audioConverter;
@property(nonatomic) unsigned int audioDataBitRate; // @synthesize audioDataBitRate=_audioDataBitRate;
@property(nonatomic) unsigned long long audioDataByteCount; // @synthesize audioDataByteCount=_audioDataByteCount;
@property(nonatomic) unsigned long long audioDataOffset; // @synthesize audioDataOffset=_audioDataOffset;
@property(nonatomic) unsigned long long audioDataPacketCount; // @synthesize audioDataPacketCount=_audioDataPacketCount;
@property(retain, nonatomic) KSAudioDataProvider *audioDataProvider; // @synthesize audioDataProvider=_audioDataProvider;
@property(retain, nonatomic) NSArray *audioFileTypes; // @synthesize audioFileTypes=_audioFileTypes;
@property(retain, nonatomic) NSMutableArray *audioPackets; // @synthesize audioPackets=_audioPackets;
@property(nonatomic) unsigned int averageBytesPerSecond; // @synthesize averageBytesPerSecond=_averageBytesPerSecond;
@property(nonatomic) _Bool bEof; // @synthesize bEof=_bEof;
- (_Bool)canProducePackets:(id *)arg1;
- (int)checkAudioPacketsToRead;
- (void)close;
- (int)converter:(unsigned int *)arg1 bufferList:(struct AudioBufferList *)arg2 des:(struct AudioStreamPacketDescription **)arg3;
- (_Bool)createLPCMAudioConvertor:(struct AudioStreamBasicDescription *)arg1 error:(id *)arg2;
@property(nonatomic) long long curPacketOffset; // @synthesize curPacketOffset=_curPacketOffset;
@property(readonly, nonatomic) unsigned int databytesPerSecond;
- (void)dealWithDataFormat;
- (void)dealWithFormatList:(struct OpaqueAudioFileStreamID *)arg1;
@property(nonatomic) _Bool disContinuous; // @synthesize disContinuous=_disContinuous;
@property(readonly, nonatomic) double duration;
@property(nonatomic) double fileDurion; // @synthesize fileDurion=_fileDurion;
@property(nonatomic) struct AudioStreamBasicDescription fileFormat; // @synthesize fileFormat=_fileFormat;
@property(nonatomic) long long fileReadOffset; // @synthesize fileReadOffset=_fileReadOffset;
@property(nonatomic) struct OpaqueAudioFileStreamID *fileStreamID; // @synthesize fileStreamID=_fileStreamID;
- (id)guessAudioFileType;
- (void)handleAudioPackets:(const void *)arg1 numberBytes:(unsigned int)arg2 numberPackets:(unsigned int)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (void)handlePropertyChangeForFileStream:(struct OpaqueAudioFileStreamID *)arg1 fileStreamPropertyID:(unsigned int)arg2 ioFlags:(unsigned int *)arg3;
- (id)initWithDataProvider:(id)arg1;
@property(retain, nonatomic) NSMutableData *inputData; // @synthesize inputData=_inputData;
@property(nonatomic) struct AudioStreamPacketDescription *inputDesc; // @synthesize inputDesc=_inputDesc;
@property(readonly, nonatomic) _Bool isEof;
- (_Bool)isFileReadyToParsing;
@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(readonly, nonatomic) long long lastReadingPos;
@property(nonatomic) unsigned int maxPacketSize; // @synthesize maxPacketSize=_maxPacketSize;
@property(nonatomic) _Bool needCalculateByProcessedPackets; // @synthesize needCalculateByProcessedPackets=_needCalculateByProcessedPackets;
- (_Bool)open:(id *)arg1;
- (struct AudioStreamBasicDescription *)outputDes;
@property(nonatomic) unsigned int outputSizePerPacket; // @synthesize outputSizePerPacket=_outputSizePerPacket;
@property(nonatomic) double packetDuraion; // @synthesize packetDuraion=_packetDuraion;
@property(nonatomic) unsigned long long processedPacketsCount; // @synthesize processedPacketsCount=_processedPacketsCount;
@property(nonatomic) unsigned long long processedPacketsSizeTotal; // @synthesize processedPacketsSizeTotal=_processedPacketsSizeTotal;
- (_Bool)readPCMPacket:(struct AudioStreamBasicDescription *)arg1 buffer:(void *)arg2 bytes:(unsigned int *)arg3 packets:(unsigned int *)arg4 err:(id *)arg5;
- (int)readPacket:(void *)arg1 bytes:(unsigned int *)arg2 packets:(unsigned int *)arg3 des:(struct AudioStreamPacketDescription *)arg4;
@property(nonatomic) _Bool readyToProducePackets; // @synthesize readyToProducePackets=_readyToProducePackets;
- (_Bool)seekPacketPos:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *magicCookie;
@property(readonly) Class superclass;

@end
