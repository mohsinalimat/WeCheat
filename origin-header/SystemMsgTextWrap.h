//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface SystemMsgTextWrap : NSObject
{
    unsigned int _width;
    unsigned int _font;
    NSString *_text;
    UIColor *_color;
    struct CGPoint _origin;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) unsigned int font; // @synthesize font=_font;
@property(nonatomic) struct CGPoint origin; // @synthesize origin=_origin;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned int width; // @synthesize width=_width;

@end

