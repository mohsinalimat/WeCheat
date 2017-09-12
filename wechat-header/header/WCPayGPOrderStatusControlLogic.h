//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCPayGPOrderStatusViewControllerDelegate-Protocol.h"
#import "WCPayPayMoneyLogicDelegate-Protocol.h"

@class NSString, WCPayPayMoneyLogic;
@protocol WCPayGPOrderStatusControlLogicDelegate;

@interface WCPayGPOrderStatusControlLogic : WCPayControlLogic <PBMessageObserverDelegate, WCPayGPOrderStatusViewControllerDelegate, WCPayPayMoneyLogicDelegate, WCBaseControlMgrExt, WCBaseControlLogicDeleagte, UIAlertViewDelegate>
{
    unsigned int _msgLocalID;
    unsigned int _ver;
    id <WCPayGPOrderStatusControlLogicDelegate> _orderStatusDelegate;
    WCPayPayMoneyLogic *_payMoneyLogic;
    unsigned long long _currentLogicScene;
    NSString *_curAlertRightBtnUrl;
    NSString *_sign;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addAAPaySuccessSysMsg;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)cancelCloseOrderFromSysMsg;
- (void)cancelCloseUnPayNotifyFromSysMsg;
- (void)confirmCloseOrderFromSysMsg;
- (void)confirmCloseUnPayNotifyFromSysMsg;
@property(retain, nonatomic) NSString *curAlertRightBtnUrl; // @synthesize curAlertRightBtnUrl=_curAlertRightBtnUrl;
@property(nonatomic) unsigned long long currentLogicScene; // @synthesize currentLogicScene=_currentLogicScene;
- (void)dealloc;
- (void)delayStopLogic;
- (void)dismissAndStopLogic;
- (void)getAAOrderDetailFromSvr;
- (_Bool)gotoViewController:(id)arg1;
- (void)handleQryPaySuccFinish;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 selectedMessageWrap:(id)arg5;
- (id)initWithBillNum:(id)arg1 withOrderStatusFromScene:(unsigned long long)arg2 withChatroomContact:(id)arg3 withLogicScene:(unsigned long long)arg4 withMsgLocalID:(unsigned int)arg5;
- (id)initWithJSParam:(id)arg1;
@property(nonatomic) unsigned int msgLocalID; // @synthesize msgLocalID=_msgLocalID;
- (void)onClickLaunchNewGroupPayBtn;
- (void)onClickViewBalanceLink;
- (void)onGetAACloseUnpayNotifyResonse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderDetailResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAOrderPrePayResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetAAPaySuccResponse:(id)arg1;
- (void)onGetCloseAAOrderResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetSendPayNotifyMsgResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onLauncherClickCloseOrderBtn;
- (void)onLauncherClickSendPayNotifyMsgBtn;
- (void)onOrderStatusViewControllerCancel;
- (void)onPayerClickCloseUnPayNotify;
- (void)onPayerClickPayMoneyButton;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
@property(nonatomic) __weak id <WCPayGPOrderStatusControlLogicDelegate> orderStatusDelegate; // @synthesize orderStatusDelegate=_orderStatusDelegate;
@property(retain, nonatomic) WCPayPayMoneyLogic *payMoneyLogic; // @synthesize payMoneyLogic=_payMoneyLogic;
- (void)queryAAPaySuccFromSvr;
@property(retain, nonatomic) NSString *sign; // @synthesize sign=_sign;
@property(nonatomic) unsigned int ver; // @synthesize ver=_ver;
- (void)startLogic;
- (void)startPayMoneyLogic;
- (void)stopLogic;
- (_Bool)updateC2CNewXmlMsgContentWithRespXml:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
