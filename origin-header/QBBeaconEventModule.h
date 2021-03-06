//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QBBeaconAnalyticsModule-Protocol.h"

@class QBBeaconModuleStrategy;

@interface QBBeaconEventModule : NSObject <QBBeaconAnalyticsModule>
{
    _Bool userEnabled;
    _Bool beaconStatisReportEnabled;
    QBBeaconModuleStrategy *moduleStrategy;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)appEnterBack;
- (void)appResumed;
- (void)appStarted;
@property(nonatomic) _Bool beaconStatisReportEnabled; // @synthesize beaconStatisReportEnabled;
- (_Bool)checkAndEnable;
- (void)disableModule;
- (void)enableModule;
- (id)init;
- (void)initBeaconProperties;
- (_Bool)isEnabled;
- (int)moduleKey;
@property(retain) QBBeaconModuleStrategy *moduleStrategy; // @synthesize moduleStrategy;
- (void)recordAppLaunchEvent:(_Bool)arg1;
- (void)refreshNetInfo;
@property(nonatomic) _Bool userEnabled; // @synthesize userEnabled;
- (_Bool)uploadModuleHistoryData;

@end

