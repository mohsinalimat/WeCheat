//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomMemberGridViewDelegate-Protocol.h"
#import "IContactLabelMgrExt-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "MultiSelectContactsViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class ContactTagData, MMTableViewInfo, NSMutableArray, NSString, UILabel, UITextField;
@protocol ContactTagDetailViewControllerDelegate;

@interface ContactTagDetailViewController : MMUIViewController <UIAlertViewDelegate, MMTableViewInfoDelegate, ChatRoomMemberGridViewDelegate, contactInfoDelegate, IContactLabelMgrExt, MultiSelectContactsViewControllerDelegate, UITextFieldDelegate>
{
    ContactTagData *_contactTagData;
    int _actionType;
    unsigned int _uiJobID;
    MMTableViewInfo *m_tableViewInfo;
    NSMutableArray *m_arrMemberList;
    unsigned long long m_nCellCnt;
    _Bool m_bDeleteStatus;
    UITextField *m_tagNameTextField;
    UILabel *m_WarningTextLabel;
    id <ContactTagDetailViewControllerDelegate> m_delegate;
    NSString *m_title;
    NSString *m_leftBarButtonTitle;
    _Bool isAlreadyPopKeyBoardWhenCreate;
    _Bool isShowWarningText;
    _Bool isAlreadyDisMissSelf;
    _Bool isTagNameOverLimit;
    int TagCountOfMutiSelectScene;
    _Bool m_bIsFromContactTagHelloWorld;
    NSString *ns_CurTagNameTextFieldValue;
}

- (void).cxx_destruct;
- (void)HideWarningText;
- (void)InternalDisMissSelfAnimated:(_Bool)arg1;
- (unsigned int)JobForContactTagChanged;
- (unsigned int)JobForTagNameWithServer;
- (void)LoadMemberList;
- (void)SetSaveButtonEnable:(_Bool)arg1;
- (void)ShowMultiSelectContactsViewController:(id)arg1;
- (void)ShowWarningText:(id)arg1;
- (void)addMember;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (unsigned long long)getBtnList:(id)arg1;
- (long long)getColCount;
- (void)initData;
- (void)initView;
- (id)initWithItem:(id)arg1;
- (id)initWithMembers:(id)arg1;
- (_Bool)isContactTagListChanged;
- (_Bool)isTagNameChanged;
- (_Bool)isTagNameCreated;
- (_Bool)isTagNameEmpty:(id)arg1;
- (_Bool)isTagNameEmptyOrExist:(id)arg1;
@property(nonatomic) _Bool m_bIsFromContactTagHelloWorld; // @synthesize m_bIsFromContactTagHelloWorld;
@property(nonatomic) __weak id <ContactTagDetailViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_leftBarButtonTitle; // @synthesize m_leftBarButtonTitle;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
- (void)makeDeleteBtnCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeDeleteBtnSection;
- (id)makeInfoHeaderSection;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeMemListSection;
- (void)makeTagNameCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWarningTextCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
@property(retain, nonatomic) NSString *ns_CurTagNameTextFieldValue; // @synthesize ns_CurTagNameTextFieldValue;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onDeleteContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onDeleteMember:(id)arg1;
- (void)onDismiss:(id)arg1;
- (void)onLongPressEx:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onSave:(id)arg1;
- (void)onTagDeleteButtonPress:(id)arg1;
- (void)onTagNameChanged:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)reloadMemberListAndView:(id)arg1 isChatRoomList:(_Bool)arg2;
- (void)reloadTableData;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)setShowRemoveMember;
- (void)sortTagContacts;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)updateContactLabelName:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)updateMemberView;
- (void)updateToNormalStatusEx;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
