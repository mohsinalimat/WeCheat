//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString;

@interface MMPropertyParserToken : MMObject
{
    int _attributes;
    NSString *_name;
    NSString *_type;
    NSString *_getter;
    NSString *_setter;
}

- (void).cxx_destruct;
@property(nonatomic) int attributes; // @synthesize attributes=_attributes;
- (id)description;
@property(retain, nonatomic) NSString *getter; // @synthesize getter=_getter;
- (id)init;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *setter; // @synthesize setter=_setter;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;

@end
