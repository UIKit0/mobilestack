/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBStatusBarContentView.h"

@interface SBStatusBarAirPortView : SBStatusBarContentView
{
    int _signalStrength;
    unsigned int _showsAirPortBars:1;
    unsigned int _isPolling:1;
}

- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)setAirPortStrength:(int)fp8;
- (void)setShowsAirPortBars:(BOOL)fp8;
- (void)dataConnectionTypeChanged;
- (void)drawRect:(struct CGRect)fp8;
- (void)mouseUp:(struct __GSEvent *)fp8;

@end

