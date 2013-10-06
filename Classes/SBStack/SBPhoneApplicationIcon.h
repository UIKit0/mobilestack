/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBApplicationIcon.h"

@class UIImage, UIImageView;

@interface SBPhoneApplicationIcon : SBApplicationIcon
{
    UIImageView *_blinkIcon;
    UIImage *_blinkOnIcon;
    unsigned int _isBlinking:1;
}

- (id)initWithApplication:(id)fp8;
- (void)dealloc;
- (void)_startTimer;
- (void)_stopTimer;
- (void)iconBecameVisible;
- (void)iconWillBeHidden;
- (void)alertWindowHidden;
- (void)startBlinking;
- (void)stopBlinking;
- (void)mouseUp:(struct __GSEvent *)fp8;
- (void)_activeCallStateChanged:(id)fp8;

@end

