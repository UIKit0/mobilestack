/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject.h"

@class SBIcon, SBIconList;

@interface SBMovePlan : NSObject
{
    SBIcon *_icon;
    SBIconList *_source;
    SBIconList *_destination;
    int _x;
    int _y;
}

- (id)initWithIcon:(id)fp8 x:(int)fp12 y:(int)fp16 source:(id)fp20 destination:(id)fp24;
- (void)dealloc;
- (int)x;
- (int)y;
- (id)destination;
- (id)source;
- (id)icon;

@end

