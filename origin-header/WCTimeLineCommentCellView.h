//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCActionSheetDelegate-Protocol.h"
#import "WCCommentViewFBDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UINavigationController, UIView, WCDataItem;
@protocol ILinkEventExt, WCTimeLineCommentCellViewDelegate;

@interface WCTimeLineCommentCellView : MMUIView <WCActionSheetDelegate, WCCommentViewFBDelegate>
{
    long long _iSection;
    long long _iRow;
    WCDataItem *_mainDataItem;
    UINavigationController *_navigationController;
    id <WCTimeLineCommentCellViewDelegate> m_delegate;
    id <ILinkEventExt> m_urlDelegate;
    UIImageView *m_commentContainer;
    UIView *m_likeContainer;
    UIView *m_lineView;
    NSMutableArray *m_arrCommentView;
    _Bool m_bHaveActionSheet;
}

+ (double)getCellHeightForDataItem:(id)arg1 RowIndex:(long long)arg2;
+ (double)getCommentViewLeftMarginCurOri;
+ (id)getNickNameForDataItem:(id)arg1;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)deleteComment:(unsigned long long)arg1;
- (id)getShowComment;
@property(nonatomic) long long iRow; // @synthesize iRow=_iRow;
@property(nonatomic) long long iSection; // @synthesize iSection=_iSection;
- (void)initCommentContainer;
- (void)initLikeContainer;
- (void)initLineView;
- (void)initView;
- (id)initWithUrlDelegate:(id)arg1;
- (_Bool)isShowLikeCell;
- (void)layoutSubviews;
@property(nonatomic) __weak id <WCTimeLineCommentCellViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) __weak id <ILinkEventExt> m_urlDelegate; // @synthesize m_urlDelegate;
@property(retain, nonatomic) WCDataItem *mainDataItem; // @synthesize mainDataItem=_mainDataItem;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void)onCommentViewClicked:(id)arg1;
- (void)onReloadCommentCellView:(id)arg1;
- (void)onRestoreCommentCellView:(id)arg1;
- (void)showCommentOption:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
