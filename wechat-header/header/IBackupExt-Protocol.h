//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IBackupExt <NSObject>

@optional
- (void)onBackupAlertCode:(unsigned long long)arg1;
- (void)onBackupNotifyCode:(unsigned long long)arg1;
- (void)onBackupTransferSpeed:(float)arg1;
- (void)onProgressCurrentSession:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onStartBackup;
- (void)onTerminateBackup;
@end
