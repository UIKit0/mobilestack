/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import <Preferences/PSTableCell.h>

#import "UITextViewLegacyDelegate-Protocol.h"

@class PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextViewLegacyDelegate>
{
    PSTextView *_textView;
}

- (void)setValue:(id)fp8;
- (void)textViewDidResignFirstResponder:(id)fp8;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)textView;
- (void)setTextView:(id)fp8;
- (void)drawTitleInRect:(struct CGRect)fp8 selected:(BOOL)fp24;

@end

