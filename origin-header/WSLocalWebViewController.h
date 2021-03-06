//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FTSJSEventDelegate-Protocol.h"
#import "FTSWebSearchDataSource-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class FTSWebSearchMgr, NSString, UIView, WSResultViewLogic;
@protocol YYWebViewInterface;

@interface WSLocalWebViewController : MMUIViewController <UIScrollViewDelegate, FTSJSEventDelegate, FTSWebSearchDataSource>
{
    UIView *_navBarBkg;
    UIView<YYWebViewInterface> *_webView;
    WSResultViewLogic *_resultViewLogic;
    FTSWebSearchMgr *_webSearchMgr;
    int _scene;
    unsigned long long _businessType;
    NSString *_contentTitle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
- (void)dealloc;
- (void)initContentView;
- (void)initNavigationBar;
- (void)initTitleView;
- (id)initWithScene:(int)arg1;
- (void)loadLocalWebView;
- (void)onLaunchPage:(id)arg1 withParams:(id)arg2;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onOpenContact:(id)arg1;
- (void)onOpenMsgSession:(id)arg1;
- (void)onSearchInputChanged:(id)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidLoad;
- (id)viewStacks;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

