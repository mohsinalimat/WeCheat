//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "BlockViewControllerDelegate-Protocol.h"
#import "IPreEnterWechatLogicExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class BlockViewController, NSDictionary, NSString, NSURL;

@interface BaseOpenSDKHandler : MMObject <BlockViewControllerDelegate, PBMessageObserverDelegate, IPreEnterWechatLogicExt>
{
    NSURL *_infoUrl;
    NSString *_appID;
    NSString *_bundleID;
    BlockViewController *_blockView;
    NSDictionary *_linkMap;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)cancelHandler;
- (void)dealloc;
- (id)getExtTaransLinkParams;
- (void)onBlockViewControllerReturn;
- (void)onPreEnterWechatDone;
- (void)realHandleReqAfterermissionValidation;
- (void)startHandler:(id)arg1 bundleId:(id)arg2 appId:(id)arg3;
- (void)startPermissionValidation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

