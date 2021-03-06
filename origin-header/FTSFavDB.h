//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTSDB;

@interface FTSFavDB : NSObject
{
    FTSDB *_database;
}

- (void).cxx_destruct;
- (_Bool)createAllTable;
@property(retain, nonatomic) FTSDB *database; // @synthesize database=_database;
- (void)dealloc;
- (_Bool)deleteAllRowsInFavTable;
- (_Bool)deleteRowInFavTable:(unsigned int)arg1;
- (_Bool)deleteRowsInFavTable:(id)arg1;
- (void)initDB:(id)arg1;
- (_Bool)insertRowInFavTable:(id)arg1;
- (_Bool)insertRowsInFavTable:(id)arg1;
- (id)queryText:(id)arg1;
- (id)queryText:(id)arg1 limit:(int)arg2 searchAll:(id *)arg3;
- (void)reloadDB;
- (_Bool)updateRowInFavTable:(id)arg1;
- (_Bool)updateRowsInFavTable:(id)arg1;

@end

