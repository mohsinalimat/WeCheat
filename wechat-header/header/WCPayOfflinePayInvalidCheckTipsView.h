//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt-Protocol.h"

@class MMUILabel, NSString, RichTextView, UIButton, UIImageView;
@protocol WCPayOfflinePayInvalidCheckTipsViewDelegate;

@interface WCPayOfflinePayInvalidCheckTipsView : MMUIView <ILinkEventExt>
{
    id <WCPayOfflinePayInvalidCheckTipsViewDelegate> _delegate;
    UIImageView *_iconImgView;
    MMUILabel *_tipsLabel;
    RichTextView *_richTextView;
    UIButton *_confirmBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
- (void)confirmBtnPress:(id)arg1;
@property(nonatomic) __weak id <WCPayOfflinePayInvalidCheckTipsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
- (id)initInvalidTipsViewWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
@property(retain, nonatomic) RichTextView *richTextView; // @synthesize richTextView=_richTextView;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
- (void)setupContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
