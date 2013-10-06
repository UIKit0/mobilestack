/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

#import "UIModalViewDelegate-Protocol.h"

@interface SBNowPlayingAlertItem : SBAlertItem <UIModalViewDelegate>
{
    unsigned int _seeked:1;
    unsigned int _deferLayout:1;
    unsigned int _needsLayout:1;
}

+ (id)currentInstance;
+ (BOOL)hasCurrentInstance;
- (id)init;
- (id)createCenteredLabel:(BOOL)fp8;
- (void)_updateLabelWithTag:(int)fp8 text:(id)fp12 faded:(BOOL)fp16 cursor:(float *)fp20 sheet:(id)fp24;
- (void)updateInformation:(BOOL)fp8;
- (id)_createButtonWithImage:(id)fp8 action:(SEL)fp12 tag:(int)fp16;
- (id)alertSheet;
- (void)willActivate;
- (void)willDeactivateForReason:(int)fp8;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)willPresentModalView:(id)fp8;
- (void)didPresentModalView:(id)fp8;
- (void)_clearSeekedFlag:(id)fp8;
- (void)_controlButtonAction:(id)fp8;
- (void)_volumeChange:(id)fp8;
- (void)viewHandleTouchPause:(id)fp8 isDown:(BOOL)fp12;
- (double)viewTouchPauseThreshold:(id)fp8;
- (void)_registerForNowPlayingNotifications;
- (void)_unregisterForNowPlayingNotifications;
- (void)_registerForVolumeNotifications;
- (void)_unregisterForVolumeNotifications;
- (void)_nowPlayingChanged:(id)fp8;
- (void)_systemVolumeChanged:(id)fp8;

@end
