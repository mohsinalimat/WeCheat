//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSURLRequest, NSURLResponse;

@interface RNCachedData : NSObject <NSCoding>
{
    NSData *data_;
    NSURLResponse *response_;
    NSURLRequest *redirectRequest_;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=data_;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSURLRequest *redirectRequest; // @synthesize redirectRequest=redirectRequest_;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=response_;

@end
