//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSString;

@interface WloginTlv_0x146 : WloginTlv
{
    unsigned short wErrorVer;
    unsigned short wErrorCode;
    NSString *sErrorTitle;
    NSString *sErrorMsg;
    unsigned short wErrorInfoType;
    NSString *sErrorInfo;
}

- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
@property(copy) NSString *sErrorInfo; // @synthesize sErrorInfo;
@property(copy) NSString *sErrorMsg; // @synthesize sErrorMsg;
@property(copy) NSString *sErrorTitle; // @synthesize sErrorTitle;
@property unsigned short wErrorCode; // @synthesize wErrorCode;
@property unsigned short wErrorInfoType; // @synthesize wErrorInfoType;
@property unsigned short wErrorVer; // @synthesize wErrorVer;

@end

