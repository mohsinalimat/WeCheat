//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@interface GPUImageChromaKeyBlendFilter : GPUImageTwoInputFilter
{
    int colorToReplaceUniform;
    int thresholdSensitivityUniform;
    int smoothingUniform;
    double _thresholdSensitivity;
    double _smoothing;
}

- (id)init;
- (void)setColorToReplaceRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
@property(nonatomic) double smoothing; // @synthesize smoothing=_smoothing;
@property(nonatomic) double thresholdSensitivity; // @synthesize thresholdSensitivity=_thresholdSensitivity;

@end

