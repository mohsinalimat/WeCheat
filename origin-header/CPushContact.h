//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CContact.h"

@class CMessageWrap, NSString;

@interface CPushContact : CContact
{
    NSString *m_nsSource;
    _Bool m_bReaded;
    unsigned int m_uiPushTime;
    NSString *m_nsDes;
    NSString *m_nsTicket;
    CMessageWrap *m_oMessage;
    unsigned int m_uiOpCode;
    unsigned int m_uiStatus;
    _Bool m_bSuspiciousUser;
    NSString *m_nsChatRoomUserName;
    NSString *m_nsSourceUserName;
    NSString *m_nsSourceNickName;
    NSString *m_safetyWarning;
    NSString *m_safetyWarningDetail;
}

+ (id)thread_GetContactDetailFromMsg:(id)arg1;
- (void).cxx_destruct;
- (_Bool)IsShake;
- (void)checkSetRemark:(id)arg1;
- (long long)compare:(id)arg1;
- (long long)comparePushContactAscending:(id)arg1;
- (_Bool)copyFieldFromContact:(id)arg1;
- (_Bool)copyFieldFromPushContact:(id)arg1;
- (id)description;
- (_Bool)genPushContactFromMsgWrap:(id)arg1;
- (void)getPushContactDes;
- (void)getPushContactSource;
- (id)init;
- (id)initWithMsgWrap:(id)arg1;
- (_Bool)isAddRequestContact;
- (_Bool)isExpire;
- (_Bool)isGoogleContactPush;
- (_Bool)isMobilePush;
- (_Bool)isMsgSendFromMe;
- (_Bool)isVerifyRequestFromMe;
- (_Bool)isWaitingForVerify;
@property(nonatomic) _Bool m_bReaded; // @synthesize m_bReaded;
@property(nonatomic) _Bool m_bSuspiciousUser; // @synthesize m_bSuspiciousUser;
@property(retain, nonatomic) NSString *m_nsChatRoomUserName; // @synthesize m_nsChatRoomUserName;
@property(retain, nonatomic) NSString *m_nsDes; // @synthesize m_nsDes;
@property(retain, nonatomic) NSString *m_nsSource; // @synthesize m_nsSource;
@property(retain, nonatomic) NSString *m_nsSourceNickName; // @synthesize m_nsSourceNickName;
@property(retain, nonatomic) NSString *m_nsSourceUserName; // @synthesize m_nsSourceUserName;
@property(retain, nonatomic) NSString *m_nsTicket; // @synthesize m_nsTicket;
@property(retain, nonatomic) CMessageWrap *m_oMessage; // @synthesize m_oMessage;
@property(retain, nonatomic) NSString *m_safetyWarning; // @synthesize m_safetyWarning;
@property(retain, nonatomic) NSString *m_safetyWarningDetail; // @synthesize m_safetyWarningDetail;
@property(nonatomic) unsigned int m_uiOpCode; // @synthesize m_uiOpCode;
@property(nonatomic) unsigned int m_uiPushTime; // @synthesize m_uiPushTime;
@property(nonatomic) unsigned int m_uiStatus; // @synthesize m_uiStatus;
- (id)toContact;
- (id)xmlForMessageWrapContent:(id)arg1 OpCode:(unsigned int)arg2;

@end

