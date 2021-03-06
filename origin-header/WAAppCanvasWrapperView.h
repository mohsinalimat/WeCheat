//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IWAMsgNodeJSCoreCenterExt-Protocol.h"
#import "WACanvasViewDelegate-Protocol.h"

@class DotLoadingView, NSObject, NSString, UIImageView, WAAppCanvasWrapperViewData, WACanvasView;
@protocol OS_dispatch_queue, WAAppCanvasWrapperViewDelegate;

@interface WAAppCanvasWrapperView : UIView <WACanvasViewDelegate, IWAMsgNodeJSCoreCenterExt>
{
    unsigned long long _beginTime;
    unsigned long long _firstDrawedTime;
    _Bool _isQueueSuspending;
    _Bool _isLoadingViewFading;
    unsigned int _coreId;
    id <WAAppCanvasWrapperViewDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_drawQueue;
    WACanvasView *_canvasView;
    UIImageView *_logoImgView;
    UIView *_defaultLogoBgView;
    UIView *_loadingViewBgView;
    DotLoadingView *_loadingIndicator;
    unsigned long long _viewState;
    WAAppCanvasWrapperViewData *_viewData;
}

- (void).cxx_destruct;
- (void)allocateResourcesOnSubthread;
- (void)animateChangeHeight:(double)arg1;
@property(retain, nonatomic) WACanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(readonly, nonatomic) unsigned int coreId; // @synthesize coreId=_coreId;
- (id)createIDKeyReportItem;
- (id)createTestSpeedReportItem;
- (void)dealloc;
@property(retain, nonatomic) UIView *defaultLogoBgView; // @synthesize defaultLogoBgView=_defaultLogoBgView;
@property(nonatomic) __weak id <WAAppCanvasWrapperViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doReportDrawTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *drawQueue; // @synthesize drawQueue=_drawQueue;
- (id)getImage:(id)arg1;
- (double)getMilliseconds:(struct timeval)arg1;
- (void)goDisabled;
- (void)goDownloadFail;
- (void)goDrawed;
- (void)goLoading;
- (void)hideDefaultLogoBgView;
- (void)hideLoadingView;
- (id)init;
- (void)initCanvasView;
- (void)initLoadingView;
- (void)initLogoView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initializeEnv;
@property(nonatomic) _Bool isLoadingViewFading; // @synthesize isLoadingViewFading=_isLoadingViewFading;
@property(nonatomic) _Bool isQueueSuspending; // @synthesize isQueueSuspending=_isQueueSuspending;
- (void)layoutSubviews;
@property(retain, nonatomic) DotLoadingView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIView *loadingViewBgView; // @synthesize loadingViewBgView=_loadingViewBgView;
@property(retain, nonatomic) UIImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
- (void)makeSureViewInited;
- (void)onBecomeActive;
- (void)onJSCore:(unsigned int)arg1 evaluatedResult:(id)arg2 reserve:(_Bool)arg3;
- (void)onJSCore:(unsigned int)arg1 updateHeight:(double)arg2;
- (void)onJSCore:(unsigned int)arg1 viewStateChanged:(unsigned long long)arg2;
- (void)onResignActive;
- (void)pause;
- (void)releaseResourcesOnSubthread;
- (void)reportConsuming:(long long)arg1;
- (void)resume;
- (void)resumeQueue;
@property(retain, nonatomic) WAAppCanvasWrapperViewData *viewData; // @synthesize viewData=_viewData;
@property(nonatomic) unsigned long long viewState; // @synthesize viewState=_viewState;
- (void)setupWithParams:(id)arg1;
- (void)showDisabledView;
- (void)showDownloadFailView;
- (void)showLoadingView;
- (void)start;
- (void)suspendQueue;
- (void)tryGoTimeOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

