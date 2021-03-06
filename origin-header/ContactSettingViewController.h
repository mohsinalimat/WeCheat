//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "IOplogExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CContact, DelaySwitchSettingLogic, ForwardMessageLogicController, MMTableViewInfo, NSString, WCOpLog;
@protocol ContactInfoAssistDelegate;

@interface ContactSettingViewController : MMUIViewController <WCActionSheetDelegate, ForwardMessageLogicDelegate, IOplogExt>
{
    MMTableViewInfo *m_tableViewInfo;
    CContact *m_contact;
    id <ContactInfoAssistDelegate> m_delegate;
    WCOpLog *_wcOpLog;
    NSString *m_recommandRemark;
    unsigned int m_scene;
    ForwardMessageLogicController *m_forwardLogic;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    _Bool m_toBeDeleted;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addToBlackList;
- (void)cancelBlackListSwitch;
- (void)dealloc;
- (void)doAddToBlackList;
- (void)doAddToBlackListAndExpose;
- (void)doDelete;
- (void)doDeleteAndExpose;
- (void)doDeleteLocal;
- (void)doExpose:(int)arg1;
- (id)getCurrentViewController;
- (id)initWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 inScene:(unsigned int)arg2;
- (_Bool)isInMyContactList;
- (_Bool)isShowBlackAction;
@property(retain, nonatomic) NSString *m_recommandRemark; // @synthesize m_recommandRemark;
- (void)opBlackList;
- (void)opDelete:(id)arg1;
- (void)opEditRemarkName;
- (void)opExpose;
- (void)opFavour;
- (void)opOutsider:(id)arg1;
- (void)opShareMyFriend;
- (void)opWCBlacklist:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)reloadTableView;
- (void)removeFromBlackList;
- (void)setDelegate:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

