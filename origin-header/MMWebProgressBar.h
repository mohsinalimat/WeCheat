//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface MMWebProgressBar : UIView
{
    _Bool _isProcessing;
    struct CGRect _oriFrame;
}

- (float)durationOfPhase1;
- (float)durationOfPhase2;
- (float)durationOfPhase3;
- (float)durationOfPhase4;
- (void)end;
- (id)initWithFrame:(struct CGRect)arg1;
@property _Bool isProcessing; // @synthesize isProcessing=_isProcessing;
- (_Bool)isWifiOr4G;
@property struct CGRect oriFrame; // @synthesize oriFrame=_oriFrame;
- (void)progressing;
- (void)reset;
- (void)start;

@end

