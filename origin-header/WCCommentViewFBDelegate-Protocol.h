//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCCommentViewFB, WCUserComment;

@protocol WCCommentViewFBDelegate <NSObject>

@optional
- (void)onCommentViewClicked:(WCCommentViewFB *)arg1;
- (void)onReloadCommentCellView:(WCUserComment *)arg1;
- (void)onRestoreCommentCellView:(WCUserComment *)arg1;
@end

