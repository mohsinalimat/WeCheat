//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSDictionary, NSString, UIImage;

@interface ExpressionWrap : MMObject
{
    NSString *_key;
    NSDictionary *_descDic;
    NSString *_imagePath;
    NSString *_imageName;
    UIImage *_image;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *descDic; // @synthesize descDic=_descDic;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (id)loadImage;

@end

