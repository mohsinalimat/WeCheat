//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class FTSBussinessCommonItem, FTSBussinessContactItem, FTSBussinessPOIItem, FTSBussinessSnsItem;

@interface FTSBussinessResultItem : MMObject
{
    unsigned int _type;
    FTSBussinessContactItem *_contactItem;
    FTSBussinessCommonItem *_commonItem;
    FTSBussinessPOIItem *_poiItem;
    FTSBussinessSnsItem *_snsItem;
    unsigned long long _docId;
}

+ (id)fromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FTSBussinessCommonItem *commonItem; // @synthesize commonItem=_commonItem;
@property(retain, nonatomic) FTSBussinessContactItem *contactItem; // @synthesize contactItem=_contactItem;
@property(nonatomic) unsigned long long docId; // @synthesize docId=_docId;
- (id)init;
@property(retain, nonatomic) FTSBussinessPOIItem *poiItem; // @synthesize poiItem=_poiItem;
@property(retain, nonatomic) FTSBussinessSnsItem *snsItem; // @synthesize snsItem=_snsItem;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end
