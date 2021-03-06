//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMoviePlayerController, UIView;

@interface MMMPMoviePlayerController : NSObject
{
    struct CGRect _frame;
    UIView *_superView;
    MPMoviePlayerController *_moviePlayerController;
}

- (void).cxx_destruct;
- (void)applyUserSettingsToMoviePlayer;
- (void)createAndConfigurePlayerWithURL:(id)arg1 sourceType:(long long)arg2;
- (void)createAndPlayMovieForURL:(id)arg1 sourceType:(long long)arg2;
- (void)dealloc;
- (void)deletePlayerAndNotificationObservers;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
- (void)installMovieNotificationObservers;
- (void)loadStateDidChange:(id)arg1;
- (void)mediaIsPreparedToPlayDidChange:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (void)moviePlayBackStateDidChange:(id)arg1;
@property(retain, nonatomic) MPMoviePlayerController *moviePlayerController; // @synthesize moviePlayerController=_moviePlayerController;
- (void)playMovieFile:(id)arg1;
- (void)playMovieStream:(id)arg1;
- (void)removeMovieNotificationHandlers;
- (void)removeMovieViewFromViewHierarchy;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;

@end

