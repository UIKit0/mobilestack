/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class NSTimer, SBApplicationIcon, SBCarrierDebuggingAlert, SBIcon, SBIconList, SBIconModel, SBReorderInfoAlert, SBTouchPageIndicator, TPLCDTextView, UIScroller, UIView;

@interface SBIconController : NSObject
{
    SBIconModel *_iconModel;
    UIView *_contentView;
    UIScroller *_scroller;
    SBTouchPageIndicator *_pageIndicator;
    int _currentIconListIndex;
    TPLCDTextView *_idleText;
    SBApplicationIcon *_pendingIcon;
    SBIcon *_lastClickedIcon;
    double _lastClickedTime;
    SBIcon *_grabbedIcon;
    SBIconList *_grabbedIconList;
    int _grabbedX;
    int _grabbedY;
    SBIcon *_swappedIcon;
    SBIconList *_swappedIconList;
    int _swappedX;
    int _swappedY;
    SBIconList *_destinationIconList;
    int _destinationX;
    int _destinationY;
    NSTimer *_scrollPageTimer;
    unsigned int _didScroll:1;
    unsigned int _isScrolling:1;
    unsigned int _isEditing:1;
    unsigned int _compacted:1;
    unsigned int _willSwap:1;
    unsigned int _animatingToNewState:1;
    unsigned int _animateToNewStateAfterDelay:1;
    SBIcon *_iconToInstall;
    struct CGPoint _lastDragLoc;
    SBReorderInfoAlert *_reorderInfoAlert;
    SBCarrierDebuggingAlert *_carrierDebuggingAlert;
}

+ (id)sharedInstance;
- (id)init;
- (void)dealloc;
- (id)contentView;
- (void)showInfoAlertIfNeeded;
- (void)showCarrierDebuggingAlertIfNeeded;
- (int)lowestVisibleIconListIndex;
- (void)startJitteringCurrentIconLists;
- (void)stopJitteringCurrentIconLists;
- (void)_jitterOptionsChanged;
- (void)jitterOptionsChanged;
- (void)touchPageIndicator:(id)fp8 didRecieveTouchInDirection:(int)fp12;
- (void)updateCurrentIconListIndexUpdatingPageIndicator:(BOOL)fp8;
- (id)currentIconList;
- (void)scrollToIconListContainingIcon:(id)fp8 animate:(BOOL)fp12;
- (void)scrollToIconListAtIndex:(int)fp8 animate:(BOOL)fp12;
- (void)updateContentSizeAndPageCount;
- (void)appendIconList:(id)fp8;
- (void)noteNumberOfIconListsChanged;
- (void)removeEmptyIconList:(id)fp8 animate:(BOOL)fp12;
- (void)relayoutIcons;
- (id)iconToInstall;
- (void)setIconToInstall:(id)fp8;
- (void)finishInstallingIcon;
- (void)revealIconForDisplayIdentifier:(id)fp8;
- (void)scrollToIconDestination;
- (id)addIcon:(id)fp8 toIconList:(id)fp12 x:(int)fp16 y:(int)fp20 animate:(BOOL)fp24 moveNow:(BOOL)fp28 scrollToList:(BOOL)fp32;
- (id)insertIcon:(id)fp8 intoIconList:(id)fp12 X:(int)fp16 Y:(int)fp20 moveNow:(BOOL)fp24 duration:(float)fp28;
- (void)removeIcon:(id)fp8 animate:(BOOL)fp12;
- (void)uninstallIconDidAnimate:(id)fp8 finished:(id)fp12 icon:(id)fp16;
- (void)uninstallIcon:(id)fp8;
- (void)lcdTextViewCompletedScroll:(id)fp8;
- (float)idleModeTextHeight;
- (void)idleTextDidAnimate:(id)fp8 finished:(id)fp12 toText:(id)fp16;
- (void)updateNumberOfRowsWithDuration:(float)fp8;
- (BOOL)hasIdleModeText;
- (void)setIdleModeText:(id)fp8;
- (void)scatter:(BOOL)fp8;
- (void)unscatter:(BOOL)fp8 startTime:(double)fp12;
- (void)scrollerWillStartSmoothScrolling:(id)fp8;
- (void)scrollerDidScroll:(id)fp8;
- (void)scrollerDidEndDragging:(id)fp8 willSmoothScroll:(BOOL)fp12;
- (void)scrollerDidEndSmoothScrolling:(id)fp8;
- (void)scrollerDidEndAnimatedScrolling:(id)fp8;
- (void)showAccessory:(id)fp8;
- (void)removeAccessory:(id)fp8;
- (void)launchIcon:(id)fp8;
- (void)doubleClickedIcon:(id)fp8;
- (void)clickedIcon:(id)fp8;
- (void)attemptPendingLaunch;
- (BOOL)hasLaunchPending;
- (void)pendLaunchOfIcon:(id)fp8;
- (int)reorderCount;
- (void)incrementReorderCount;
- (void)_addEmptyListIfNecessary;
- (void)setIsEditing:(BOOL)fp8;
- (BOOL)isEditing;
- (id)iconAnimationView;
- (void)moveIconToWindow:(id)fp8;
- (void)moveIconFromWindow:(id)fp8 toIconList:(id)fp12;
- (void)startDraggingIcon:(id)fp8 fromIconList:(id)fp12;
- (void)ungrabAnimation:(id)fp8 didFinish:(id)fp12 grabbedIcon:(id)fp16;
- (void)noteDownloadStateChanged;
- (void)noteViewCovered;
- (void)setGrabbedIcon:(id)fp8;
- (id)grabbedIcon;
- (id)destinationIconList;
- (void)cancelScrollTimer;
- (void)scrollLeft;
- (void)scrollRight;
- (void)noteGrabbedIconLocationChangedWithEvent:(struct __GSEvent *)fp8;
- (void)compactIconsInIconLists:(BOOL)fp8 limitToIconList:(id)fp12;
- (void)animateToNewState:(float)fp8 domino:(BOOL)fp12;
- (void)moveAnimation:(id)fp8 didFinish:(id)fp12 movePlan:(id)fp16;
- (void)moveIcon:(id)fp8 fromIconList:(id)fp12 toX:(int)fp16 Y:(int)fp20 toIconList:(id)fp24;

@end
