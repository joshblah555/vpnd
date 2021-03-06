//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVSettingsWholeHomeAudioHomePickerViewControllerDelegate-Protocol.h"
#import "TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate-Protocol.h"
#import "TVSettingsWholeHomeAudioSetupViewControllerDelegate-Protocol.h"

@class UINavigationController, UIViewController;

@interface TVSettingsHomeSetupController : NSObject <TVSettingsWholeHomeAudioSetupViewControllerDelegate, TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate, TVSettingsWholeHomeAudioHomePickerViewControllerDelegate>
{
    UIViewController *_presentingViewController;	// 8 = 0x8
    UIViewController *_roomPickerInitialViewController;	// 16 = 0x10
    UINavigationController *_navigationController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000e93e0
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak UIViewController *roomPickerInitialViewController; // @synthesize roomPickerInitialViewController=_roomPickerInitialViewController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (id)_makeRoomPickerViewControllerWithHome:(id)arg1;	// IMP=0x00000001000e9310
- (id)_makeHomePickerViewController;	// IMP=0x00000001000e92d0
- (id)_makeRoomPickerViewController;	// IMP=0x00000001000e8fcc
- (void)wholeHomeAudioSetupViewControllerDidTransitionToUnconfiguredWithLocalAccessoryState:(id)arg1;	// IMP=0x00000001000e8f04
- (void)wholeHomeAudioSetupViewControllerDidTransitionToConfiguredState:(id)arg1;	// IMP=0x00000001000e8ec8
- (void)homePickerViewController:(id)arg1 didSelectHome:(id)arg2;	// IMP=0x00000001000e8e2c
- (void)roomPickerViewControllerDidFinish:(id)arg1;	// IMP=0x00000001000e8d64
- (void)pushRoomPickerFromInitialViewController:(id)arg1;	// IMP=0x00000001000e8cc4
- (void)startSetupWithType:(long long)arg1 presentingViewController:(id)arg2;	// IMP=0x00000001000e8b58

@end

