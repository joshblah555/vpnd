//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TVSettingsLockdownPairingsFacade : NSObject
{
    NSObject<OS_dispatch_queue> *_lockdown_queue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000001000a6c78
- (void).cxx_destruct;	// IMP=0x00000001000a6da8
- (void)setLockdownPairingEnabled:(_Bool)arg1;	// IMP=0x00000001000a6d4c
- (id)init;	// IMP=0x00000001000a6ce4

@end

