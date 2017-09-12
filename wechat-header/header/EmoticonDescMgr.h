//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "EmoticonDescRecommandLogicDelegate-Protocol.h"
#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IMMLanguageMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class EmoticonDescRecommandLogic, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface EmoticonDescMgr : MMService <EmoticonDescRecommandLogicDelegate, MMService, PBMessageObserverDelegate, IMMLanguageMgrExt, IEmoticonPackageMgrExt>
{
    NSMutableSet *m_requestPidSet;
    NSMutableDictionary *m_emoticonDescCache;
    NSMutableDictionary *m_emoticonPackageClickFlagCache;
    NSMutableDictionary *m_emoticonPackageHasDesc;
    NSMutableDictionary *m_emoticonDescToMd5Cache;
    NSRecursiveLock *m_oLock;
    NSMutableSet *m_requestForButtonDescEventIdSet;
    EmoticonDescRecommandLogic *_descRecommandLogic;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUpdateEmoticonPackageList;
- (void)OnUpdateEmoticonPackageListAfterSort;
- (void)dealloc;
@property(retain, nonatomic) EmoticonDescRecommandLogic *descRecommandLogic; // @synthesize descRecommandLogic=_descRecommandLogic;
- (_Bool)getEmoticonButtonDescByPid:(id)arg1;
- (id)getEmoticonDescByPackageId:(id)arg1 Md5:(id)arg2 withLanguageCode:(id)arg3;
- (_Bool)getEmoticonDescByPid:(id)arg1 LastRequestTime:(unsigned int)arg2;
- (id)getEmoticonDescFromFileByPackageId:(id)arg1 Md5:(id)arg2 withLanguageCode:(id)arg3;
- (unsigned int)getEmoticonPackageClickFlagByPackageId:(id)arg1;
- (id)getEmoticonPackageDescForPid:(id)arg1;
- (id)getWordingFromDic:(id)arg1 withCode:(id)arg2;
- (void)handleRespForButtonDesc:(id)arg1;
- (void)handleRespForGetEmotionDesc:(id)arg1;
- (_Bool)hasDescPid:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *m_emoticonDescCache; // @synthesize m_emoticonDescCache;
@property(retain, nonatomic) NSMutableDictionary *m_emoticonPackageClickFlagCache; // @synthesize m_emoticonPackageClickFlagCache;
@property(retain, nonatomic) NSMutableDictionary *m_emoticonPackageHasDesc; // @synthesize m_emoticonPackageHasDesc;
@property(retain, nonatomic) NSMutableSet *m_requestForButtonDescEventIdSet; // @synthesize m_requestForButtonDescEventIdSet;
@property(retain, nonatomic) NSMutableSet *m_requestPidSet; // @synthesize m_requestPidSet;
- (void)onEmoticonDescRecommandLogicFinishSearchWithKeyword:(id)arg1 result:(id)arg2 abTestItem:(id)arg3;
- (void)onGetEmoticonClickFlag:(unsigned int)arg1 pid:(id)arg2;
- (void)onGetEmoticonDesc:(id)arg1 forMd5:(id)arg2;
- (void)onLanguageChange;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)requestEmoticonWrapByDesc:(id)arg1;
- (void)updateDescFromFile:(id)arg1;
- (void)updateDescToMd5CacheFromServerPackageDesc:(id)arg1;
- (id)updateEmoticonDescFromServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
