//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 00:23:19).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKSettingItem;

@interface TVSettingsSecureWiFiViewController : TSKViewController
{
    TSKSettingItem *_secureWiFiItem;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100074fc4
@property(retain, nonatomic) TSKSettingItem *secureWiFiItem; // @synthesize secureWiFiItem=_secureWiFiItem;
- (void)_secureWiFiProfileLoaded:(id)arg1 error:(id)arg2;	// IMP=0x00000001000749a0
- (void)_loadSecureWiFiProfile:(id)arg1;	// IMP=0x0000000100074628
- (_Bool)_isSecureWiFiProfileLoaded;	// IMP=0x0000000100074474
- (void)_updateStatus;	// IMP=0x0000000100074468
- (id)loadSettingGroups;	// IMP=0x0000000100073f48

@end

