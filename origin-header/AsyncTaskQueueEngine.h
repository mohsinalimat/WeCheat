//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSCondition, NSLock, NSMutableArray;

@interface AsyncTaskQueueEngine : NSThread
{
    NSCondition *_conditon;
    NSMutableArray *_arrHighLevelTask;
    NSMutableArray *_arrMiddleLevelTask;
    NSMutableArray *_arrLowLevelTask;
    _Bool _isForeground;
    _Bool _enableForegroundTask;
    _Bool _enableTimerTask;
    NSLock *_statusLock;
}

- (void).cxx_destruct;
- (void)asyncSignal;
- (void)cancel;
- (void)enableForegroundTask;
- (void)enterBackground;
- (void)enterForeground;
- (_Bool)excuteBackgroundTask:(int)arg1;
- (_Bool)excuteForegroundTask:(int)arg1;
- (_Bool)excuteInitTask:(int)arg1;
- (_Bool)excuteTimerTask:(int)arg1;
- (void)forbidForegroundTask;
- (id)getAllTask:(int)arg1;
- (_Bool)hasEnableForegroundTask;
- (id)init;
- (void)main;
- (void)registerTask:(id)arg1 priority:(int)arg2;
- (void)setTimerTaskValid:(_Bool)arg1;
- (void)signalAllTask;
- (void)unregisterAllTask;
- (void)unregisterTask:(id)arg1;
- (void)waitAllTask;

@end

