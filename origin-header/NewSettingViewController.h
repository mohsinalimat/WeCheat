//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "PasswordLogicDelegate-Protocol.h"
#import "WCAccountBindPhoneControlLogicDelegate-Protocol.h"
#import "WCAccountSetPasswordViewControllerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableViewInfo, NSString, PasswordLogic, WCAccountBindPhoneControlLogic, WCActionSheet;

@interface NewSettingViewController : MMUIViewController <WCActionSheetDelegate, WCAccountSetPasswordViewControllerDelegate, PasswordLogicDelegate, PBMessageObserverDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    PasswordLogic *m_checkPasswdLogic;
    WCActionSheet *m_logOutActionSheet;
    _Bool m_bFromSetting;
    WCAccountBindPhoneControlLogic *m_bindPhoneLogic;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)dealloc;
- (void)doNakedWxProtect;
- (void)doOnlySetWxIdProtect;
- (void)finalQuit;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)init;
- (void)initDeepLinkConfig;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)preFinalQuit;
- (void)quitInternal;
- (void)reloadTableData;
- (void)showAboutMMView;
- (void)showAccountView;
- (void)showAuthAppListView;
- (void)showDeviceListView;
- (void)showEmotionShopView;
- (void)showFeedbackView;
- (void)showGeneralView;
- (void)showIpadClassicChooseView;
- (void)showNotificationView;
- (void)showPrivateConfigView;
- (void)showPrivateConfigViewWithContactVerify:(_Bool)arg1 animated:(_Bool)arg2;
- (void)showQuitActionSheet:(id)arg1;
- (void)showSystemNotice;
- (void)showWechatLabView;
- (void)tryQuit;
- (void)tryQuitForOnlySetWxIdProtect;
- (void)unknownFail:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

