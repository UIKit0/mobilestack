/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "UIPreferencesTextTableCell.h"

@interface PSEditableTableCell : UIPreferencesTextTableCell
{
    id _userInfo;
    SEL _targetSetter;
    id _realTarget;
}

- (void)controlChanged:(id)fp8;
- (void)setValueChangedOnReturn;
- (void)setValueChangedTarget:(id)fp8 action:(SEL)fp12 userInfo:(id)fp16;
- (void)dealloc;

@end

