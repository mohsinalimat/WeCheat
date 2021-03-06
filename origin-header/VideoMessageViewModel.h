//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString, UIImage;

@interface VideoMessageViewModel : CommonMessageViewModel
{
    NSString *m_videoPath;
    struct CGSize m_thumbImageSize;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
@property(readonly, nonatomic) _Bool canPlayVideo;
- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (void)onMessageDownloadThumbImageOK;
- (void)onMessageDownloadVideoExpired;
- (void)onMessageDownloadVideoFail;
@property(readonly, nonatomic) UIImage *thumbImage;
@property(readonly, nonatomic) struct CGSize thumbImageSize; // @synthesize thumbImageSize=m_thumbImageSize;
@property(readonly, nonatomic) NSString *videoPath; // @synthesize videoPath=m_videoPath;
@property(readonly, nonatomic) NSString *videoSize;
@property(readonly, nonatomic) NSString *videoTime;

@end

