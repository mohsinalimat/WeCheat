//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "AVVideoDeviceDelegate-Protocol.h"
#import "IStrangerContactMgrExt-Protocol.h"
#import "IVOIPExt-Protocol.h"
#import "IVOIPModeSwitchExt-Protocol.h"
#import "IVOIPVideoDeviceDelegate-Protocol.h"
#import "SmallCameraViewDelegate-Protocol.h"
#import "VideoVoipCSTalkingViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class AVAudioPlayer, AVCaptureVideoPreviewLayer, CContact, CMessageWrap, MMTimer, MultiTalkHDHeadView, NSString, UIAlertView, UIImageView, UILabel, VideoVoipCSTalkingView, VoipMinimizeReportObject, WavAudioPlayer;
@protocol VideoVoipCSViewDelegate;

@interface VideoVoipCSView : MMUIViewController <WCActionSheetDelegate, IVOIPModeSwitchExt, IVOIPExt, AVVideoDeviceDelegate, SmallCameraViewDelegate, VideoVoipCSTalkingViewDelegate, IVOIPVideoDeviceDelegate, IStrangerContactMgrExt>
{
    UIAlertView *_alertView;
    int _status;
    NSString *m_nsAppId;
    UIImageView *_backgroundView;
    CMessageWrap *_msgWrap;
    _Bool _isConnectOK;
    AVAudioPlayer *_player;
    _Bool _isAcceptVoice;
    _Bool _canUpdateStatusMachine;
    unsigned int _startTalkingTime;
    int m_viewInitMode;
    UILabel *m_mainStatusLabel;
    _Bool m_forceToVoice;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    _Bool m_hasStopBellSound;
    _Bool m_hasInvokeToAudioAnimation;
    _Bool m_isMinimizeMode;
    _Bool _m_isEndCall;
    _Bool _m_hasCalculateBlurView;
    _Bool _m_shouldChange;
    _Bool _m_isLandSpaceMode;
    _Bool _m_bAllowBackCamera;
    _Bool _m_bShowCSVideo;
    MultiTalkHDHeadView *m_headImageView;
    UILabel *m_usrnameLabel;
    UIImageView *m_blurView;
    UIImageView *m_profileBackgroundView;
    VoipMinimizeReportObject *m_reportObject;
    MMTimer *m_netStatusUpdateTimer;
    CContact *m_contact;
    NSString *m_nsHeadImageUrl;
    id <VideoVoipCSViewDelegate> _m_delegate;
    VideoVoipCSTalkingView *_m_talkingView;
    double _m_oldOriginY;
    UILabel *_m_netStatusLabel;
    WavAudioPlayer *_m_wavAudioPlayer;
}

+ (void)updateLabel:(id)arg1 WithWidth:(double)arg2 WithHeight:(double)arg3 AndLastLineWidth:(double)arg4 AndUpDownMargin:(double)arg5;
- (void).cxx_destruct;
- (void)OnLocalEarMode;
- (void)OnLocalEarModeFor2G;
- (void)OnOneWayLocalEarModeForBadNetwork;
- (void)OnOneWayRemoteEarModeForBadNetwork;
- (void)OnRemoteEarMode;
- (void)OnRemoteEarModeFor2G;
- (void)OnTalkingViewLoad:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)OnVideoModeChangeToVoiceMode;
- (_Bool)accessibilityViewIsModal;
- (void)adjustViewAndNavBarRect;
- (void)clearRenderView;
- (void)dealloc;
- (void)endCallAfterDelay:(double)arg1;
- (void)forceEndCall;
- (void)formVOIPMessageWhenCallFromMyself:(_Bool)arg1;
- (void)formVOIPSysMsgView;
- (id)getContact;
- (id)getDisplayNameByUsername:(id)arg1;
- (void)initNetStatusLabel;
- (void)initTipsView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 andContact:(id)arg2 isEarMode:(_Bool)arg3 andInitViewMode:(int)arg4 appid:(id)arg5 headUrl:(id)arg6 isAllowBackCamera:(_Bool)arg7 isShowCSVideo:(_Bool)arg8;
- (_Bool)isCaller;
- (_Bool)isInitVideoMode;
- (_Bool)isVideoMode;
- (_Bool)isVideoVoipCSTalkingViewInitWithVideoMode;
- (void)layoutBackgroundView;
- (void)layoutBlurView;
- (void)layoutHeadImageView;
- (void)layoutMainStatusLabel;
- (void)layoutNetStatusLabel;
- (void)layoutProfileBackgroundView;
- (void)layoutTalkingView;
- (void)layoutUsernameLabel;
@property(nonatomic) _Bool m_bAllowBackCamera; // @synthesize m_bAllowBackCamera=_m_bAllowBackCamera;
@property(nonatomic) _Bool m_bShowCSVideo; // @synthesize m_bShowCSVideo=_m_bShowCSVideo;
@property(retain, nonatomic) UIImageView *m_blurView; // @synthesize m_blurView;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(nonatomic) __weak id <VideoVoipCSViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) _Bool m_hasCalculateBlurView; // @synthesize m_hasCalculateBlurView=_m_hasCalculateBlurView;
@property(retain, nonatomic) MultiTalkHDHeadView *m_headImageView; // @synthesize m_headImageView;
@property(nonatomic) _Bool m_isEndCall; // @synthesize m_isEndCall=_m_isEndCall;
@property(nonatomic) _Bool m_isLandSpaceMode; // @synthesize m_isLandSpaceMode=_m_isLandSpaceMode;
@property(nonatomic) _Bool m_isMinimizeMode; // @synthesize m_isMinimizeMode;
@property(retain, nonatomic) UILabel *m_mainStatusLabel; // @synthesize m_mainStatusLabel;
@property(retain, nonatomic) UILabel *m_netStatusLabel; // @synthesize m_netStatusLabel=_m_netStatusLabel;
@property(retain, nonatomic) MMTimer *m_netStatusUpdateTimer; // @synthesize m_netStatusUpdateTimer;
@property(retain, nonatomic) NSString *m_nsHeadImageUrl; // @synthesize m_nsHeadImageUrl;
@property(nonatomic) double m_oldOriginY; // @synthesize m_oldOriginY=_m_oldOriginY;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *m_previewLayer; // @synthesize m_previewLayer;
@property(retain, nonatomic) UIImageView *m_profileBackgroundView; // @synthesize m_profileBackgroundView;
@property(retain, nonatomic) VoipMinimizeReportObject *m_reportObject; // @synthesize m_reportObject;
@property(nonatomic) _Bool m_shouldChange; // @synthesize m_shouldChange=_m_shouldChange;
@property(retain, nonatomic) VideoVoipCSTalkingView *m_talkingView; // @synthesize m_talkingView=_m_talkingView;
@property(retain, nonatomic) UILabel *m_usrnameLabel; // @synthesize m_usrnameLabel;
@property(retain, nonatomic) WavAudioPlayer *m_wavAudioPlayer; // @synthesize m_wavAudioPlayer=_m_wavAudioPlayer;
@property(retain, nonatomic) CMessageWrap *msgWrap; // @synthesize msgWrap=_msgWrap;
- (void)onConfirm;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onVideoSessionStartComplete;
- (void)onVideoVoipCSTalkingViewEndCall;
- (void)onVideoVoipCSTalkingViewHangUp;
- (void)onVideoVoipCSTalkingViewHideStatusBar;
- (_Bool)onVideoVoipCSTalkingViewRequestMinimizeStatus;
- (void)onVideoVoipCSTalkingViewShowStatusBar;
- (void)onVideoVoipCSTalkingViewSwitchToSmall;
- (void)onVoipCSWindowDidAppear;
- (void)onVoipCSWindowDisappear;
- (void)playEndingSound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)preSetAudioCategory;
- (void)quitAnimation;
- (void)setMainStatusString:(id)arg1;
- (_Bool)shouldOpenCameraFirst;
- (void)stopPlaySound;
- (void)switchToAudioModeAnimation;
- (void)switchToTalkingView;
- (void)updateNetStatus;
- (void)updateNetTypeStatus;
- (void)updateStatusLabel;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (struct CGSize)viewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
