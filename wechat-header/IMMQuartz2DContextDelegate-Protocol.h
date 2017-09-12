//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, NSString;

@protocol IMMQuartz2DContextDelegate <NSObject>
- (NSObject *)getContext:(NSString *)arg1;
- (NSArray *)getGradient;
- (double)getLineWidth;
- (void)resetGradient;
- (void)restoreContext:(struct CGContext *)arg1;
- (void)saveContext:(struct CGContext *)arg1;
- (void)setContext:(NSObject *)arg1 forKey:(NSString *)arg2;
- (void)setGradient:(NSArray *)arg1;
- (void)setLineWidth:(double)arg1;
- (void)setRotate:(double)arg1;
- (void)setScale:(double)arg1 scaleY:(double)arg2;
- (void)setTranslate:(double)arg1 translateY:(double)arg2;
@end
