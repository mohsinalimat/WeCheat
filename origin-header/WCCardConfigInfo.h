//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCCardConfigInfo : MMObject <PBCoding>
{
    _Bool isShowShoppingMall;
    NSString *emptyTips;
    NSString *shoppingMallTitle;
    NSString *shoppingMallUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSString *emptyTips; // @synthesize emptyTips;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) _Bool isShowShoppingMall; // @synthesize isShowShoppingMall;
- (void)parseFromJSONStr:(id)arg1;
@property(retain, nonatomic) NSString *shoppingMallTitle; // @synthesize shoppingMallTitle;
@property(retain, nonatomic) NSString *shoppingMallUrl; // @synthesize shoppingMallUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

