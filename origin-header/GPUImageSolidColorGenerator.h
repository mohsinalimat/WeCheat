//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageSolidColorGenerator : GPUImageFilter
{
    int colorUniform;
    int useExistingAlphaUniform;
    _Bool _useExistingAlpha;
    struct GPUVector4 _color;
}

- (void)addTarget:(id)arg1 atTextureLocation:(long long)arg2;
@property(nonatomic) struct GPUVector4 color; // @synthesize color=_color;
- (void)forceProcessingAtSize:(struct CGSize)arg1;
- (id)init;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
@property(nonatomic) _Bool useExistingAlpha; // @synthesize useExistingAlpha=_useExistingAlpha;

@end

