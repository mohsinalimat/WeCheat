//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class WCPayFacingReceiveFixedMoneyQRCodeView;
@protocol WCPayFacingReceiveFixedAmountQRCodeViewControllerDelegate;

@interface WCPayFacingReceiveFixedAmountQRCodeViewController : WCPayBaseViewController
{
    WCPayFacingReceiveFixedMoneyQRCodeView *m_oWCPayFacingReceiveFixedMoneyQRCodeView;
    id <WCPayFacingReceiveFixedAmountQRCodeViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)initHeaderView;
- (void)initNavigationBar;
- (void)onSaveQRCode;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
