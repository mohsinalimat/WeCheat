//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WCAddressStageDataStruct : NSObject <NSCoding>
{
    NSString *m_nsAddressStageID;
    NSString *m_nsAddressPostCode;
    unsigned int m_uiAddressStage;
    NSString *m_nsAddressStageName;
    NSMutableArray *m_arrAddressSubStageData;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSMutableArray *m_arrAddressSubStageData; // @synthesize m_arrAddressSubStageData;
@property(retain, nonatomic) NSString *m_nsAddressPostCode; // @synthesize m_nsAddressPostCode;
@property(retain, nonatomic) NSString *m_nsAddressStageID; // @synthesize m_nsAddressStageID;
@property(retain, nonatomic) NSString *m_nsAddressStageName; // @synthesize m_nsAddressStageName;
@property(nonatomic) unsigned int m_uiAddressStage; // @synthesize m_uiAddressStage;

@end
