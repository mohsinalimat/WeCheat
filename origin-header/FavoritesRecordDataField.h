//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FavoritesItemDataField.h"

@class NSString;

@interface FavoritesRecordDataField : FavoritesItemDataField
{
    unsigned int _msgLocalId;
    NSString *_chatName;
}

- (void).cxx_destruct;
- (id)GetDataPath;
- (id)GetThumbPath;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
@property(nonatomic) unsigned int msgLocalId; // @synthesize msgLocalId=_msgLocalId;

@end

