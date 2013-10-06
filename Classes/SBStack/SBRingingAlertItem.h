/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertItem.h"

@class AVController, NSTimer;

@interface SBRingingAlertItem : SBAlertItem
{
    AVController *_avController;
    NSTimer *_autoMuteTimer;
}

- (id)soundIdentifier;
- (id)_avController;
- (id)avClientName;
- (id)avAudioCategory;
- (id)avClientPriority;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)dismissOnLock;
- (float)lockLabelFontSize;
- (void)willPresentAlertSheet:(id)fp8;
- (void)startRingingAndVibrating;
- (void)_stopAutoMuteTimer;
- (void)_autoMute:(id)fp8;
- (void)autoMute;
- (void)alertSheet:(id)fp8 buttonClicked:(int)fp12;
- (void)willDeactivateForReason:(int)fp8;
- (void)stopRingingAndVibrating;
- (void)dealloc;

@end

