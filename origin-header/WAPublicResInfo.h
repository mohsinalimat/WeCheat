//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WAPublicResInfo : NSObject <PBCoding>
{
    _Bool bIsForceUpdate;
    unsigned int version;
    unsigned int updateTime;
    unsigned int updateScene;
    unsigned int updateType;
    NSString *pkgDownloadUrl;
    NSString *checkSum;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) _Bool bIsForceUpdate; // @synthesize bIsForceUpdate;
@property(retain, nonatomic) NSString *checkSum; // @synthesize checkSum;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *pkgDownloadUrl; // @synthesize pkgDownloadUrl;
@property(nonatomic) unsigned int updateScene; // @synthesize updateScene;
@property(nonatomic) unsigned int updateTime; // @synthesize updateTime;
@property(nonatomic) unsigned int updateType; // @synthesize updateType;
@property(nonatomic) unsigned int version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

