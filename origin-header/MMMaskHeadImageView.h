//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMHeadImageView.h"

@class UIImage, UIImageView;

@interface MMMaskHeadImageView : MMHeadImageView
{
    UIImageView *_maskFrameView;
    UIImage *_maskFrameImg;
    struct CGSize _maskFrameSize;
    UIImage *_maskHLFrameImg;
}

- (void).cxx_destruct;
- (id)initWithUsrName:(id)arg1 headImgUrl:(id)arg2 bAutoUpdate:(_Bool)arg3 bRoundCorner:(_Bool)arg4;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *maskFrameImg; // @synthesize maskFrameImg=_maskFrameImg;
@property(nonatomic) struct CGSize maskFrameSize; // @synthesize maskFrameSize=_maskFrameSize;
@property(retain, nonatomic) UIImage *maskHLFrameImg; // @synthesize maskHLFrameImg=_maskHLFrameImg;

@end

