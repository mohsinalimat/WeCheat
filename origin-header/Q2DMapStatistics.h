//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Q2dStatisticData;

@interface Q2DMapStatistics : NSObject
{
    Q2dStatisticData *_statisticData;
}

+ (id)sharedStatistics;
- (void).cxx_destruct;
- (id)DPI;
- (void)addTileStatistics:(int)arg1 type:(int)arg2;
- (id)appBundleIdentifier;
- (id)appName;
- (id)appVersion;
- (id)appendCommonUrlStatisticParamatersFor:(id)arg1;
- (id)constructArguments;
- (id)constructCommonArguments;
- (id)constructRequest;
- (id)constructURLStringWithArguments:(id)arg1 forUrl:(id)arg2;
- (id)deviceIdentifier;
- (id)init;
- (id)netType;
- (void)reportTileStatistics;
- (void)resetStatisticsData;
- (void)sendingRequest:(id)arg1:(CDUnknownBlockType)arg2;
- (void)sendingStatisticsToServer:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) Q2dStatisticData *statisticData; // @synthesize statisticData=_statisticData;
- (void)throwKeyInvalidException;

@end

