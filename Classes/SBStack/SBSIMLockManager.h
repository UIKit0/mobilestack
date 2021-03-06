/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class SBSIMLockAlertItem, SBSIMLockEntryAlert;

@interface SBSIMLockManager : NSObject
{
    BOOL _isInitialUpdate;
    int _status;
    SBSIMLockAlertItem *_currentAlert;
    SBSIMLockEntryAlert *_lockEntryAlert;
}

+ (id)sharedInstance;
- (void)dealloc;
- (BOOL)_hopelesslyPUKLocked;
- (int)_CTToSBSIMStatus:(struct __CFString *)fp8;
- (int)_statusFromCT;
- (void)lockEntryAlertDismissed:(id)fp8;
- (void)alertItemDismissed:(id)fp8;
- (void)repopAlert;
- (void)attemptUnlock;
- (void)_updateToStatus:(int)fp8;
- (void)_tryToUpdateStatus;
- (void)_tearDownAlertAndUpdateStatus;
- (void)_updateSIMStatus:(struct __CFString *)fp8 withOptions:(struct __CFDictionary *)fp12;
- (int)pinLockAttemptsRemaining;
- (int)pukLockAttemptsRemaining;
- (void)_initialUpdate;
- (void)_lockdownChanged;
- (void)registerForAlerts;
- (int)status;

@end

