//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 30 2018 09:30:25).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class DFRNavigationMode, NSButton, NSTextField;

@interface DFRVersionNavigationView : NSView
{
    DFRNavigationMode *_navigationMode;
    NSButton *_modeActionButton;
    NSButton *_navigateBackButton;
    NSButton *_navigateFowardButton;
    NSTextField *_numbersLabel;
}

@property(retain) NSTextField *numbersLabel; // @synthesize numbersLabel=_numbersLabel;
@property(retain) NSButton *navigateFowardButton; // @synthesize navigateFowardButton=_navigateFowardButton;
@property(retain) NSButton *navigateBackButton; // @synthesize navigateBackButton=_navigateBackButton;
@property(retain, nonatomic) NSButton *modeActionButton; // @synthesize modeActionButton=_modeActionButton;
@property(retain, nonatomic) DFRNavigationMode *navigationMode; // @synthesize navigationMode=_navigationMode;
- (void).cxx_destruct;
- (void)setChangeIndex:(long long)arg1 ofChanges:(long long)arg2;
- (id)_newNumbersLabel;
- (void)navigateForwardAction:(id)arg1;
- (void)navigateBackAction:(id)arg1;
- (void)_validateMode:(id)arg1;
- (void)validateCurrentMode;
- (id)_navigateForwardImage;
- (id)_navigateBackImage;
- (void)_versionNavigationViewSharedInitializer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

