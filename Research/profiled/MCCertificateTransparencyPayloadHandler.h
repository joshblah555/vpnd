//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCCertificateTransparencyPayloadHandler : MCNewPayloadHandler
{
}

- (id)exceptionsDictionary;	// IMP=0x000000010001df00
- (_Bool)setExceptions:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010001dea0
- (id)applicationID;	// IMP=0x000000010001dcf0
- (void)_remove;	// IMP=0x000000010001dcdc
- (_Bool)_installOutError:(id *)arg1;	// IMP=0x000000010001dc74
- (void)unsetAside;	// IMP=0x000000010001dc64
- (void)setAside;	// IMP=0x000000010001dc58
- (void)remove;	// IMP=0x000000010001dbe4
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010001dbd4

@end

