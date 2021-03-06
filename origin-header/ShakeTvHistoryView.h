//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "IShakeTvHistoryMgrExt-Protocol.h"

@class NSArray, NSString;
@protocol ShakeTvHistoryViewDelegate;

@interface ShakeTvHistoryView : MMUIView <IShakeTvHistoryMgrExt>
{
    NSArray *_arrTVItem;
    id <ShakeTvHistoryViewDelegate> delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <ShakeTvHistoryViewDelegate> delegate; // @synthesize delegate;
- (unsigned int)getBtnCnt;
- (unsigned int)getBtnWidth;
- (unsigned int)getXOffset;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutAllView;
- (void)onClcikIconBtn:(id)arg1;
- (void)onShakeTvHistoryDataChange;
- (void)refreshData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

