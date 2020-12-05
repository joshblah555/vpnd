//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCProfileHandler.h"

@class NSData;

@interface MCProfileServiceProfileHandler : MCProfileHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
    NSData *_persistentID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010006bd48
- (void)removeWithInstaller:(id)arg1 options:(id)arg2;	// IMP=0x000000010006bc20
- (void)unsetAside;	// IMP=0x000000010006bb2c
- (void)setAsideWithInstaller:(id)arg1;	// IMP=0x000000010006ba38
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;	// IMP=0x000000010006b7d0
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010006b5d0
- (id)fetchFinalProfileWithClient:(id)arg1 outProfileData:(id *)arg2 outError:(id *)arg3;	// IMP=0x000000010006a954
- (void)_releaseDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010006a870
- (void)_retainDependencyBetweenPersistentID:(id)arg1 andUUID:(id)arg2 forSystem:(_Bool)arg3 user:(_Bool)arg4;	// IMP=0x000000010006a78c
- (id)_badIdentityError;	// IMP=0x000000010006a6f4
- (void)dealloc;	// IMP=0x000000010006a6a0
- (id)initWithProfile:(id)arg1;	// IMP=0x000000010006a5c0

@end
