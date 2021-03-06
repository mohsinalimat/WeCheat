//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPluginBase.h"

#import "IFavAudioPlayerExt-Protocol.h"

@class NSString;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_voicePlayer : WAWebViewPluginBase <IFavAudioPlayerExt>
{
    _Bool _stopVoiceFlag;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    NSString *_localId;
}

- (void).cxx_destruct;
- (void)OnBeginPlay:(id)arg1;
- (void)OnEndPlay:(id)arg1 isForceStop:(_Bool)arg2;
- (void)OnPlayError:(id)arg1;
- (void)dealloc;
- (_Bool)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)init;
@property(copy, nonatomic) NSString *localId; // @synthesize localId=_localId;
- (void)playVoice:(id)arg1 localId:(id)arg2;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void)sendEndEventToJS:(id)arg1;
- (void)setStopVoiceFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

