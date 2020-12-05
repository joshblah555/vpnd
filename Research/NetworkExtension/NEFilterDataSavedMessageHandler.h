/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:41 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface NEFilterDataSavedMessageHandler : NSObject {

	/*^block*/id _getVerdict;
	/*^block*/id _handleVerdict;

}

@property (nonatomic,readonly) id getVerdict;                 //@synthesize getVerdict=_getVerdict - In the implementation block
@property (nonatomic,readonly) id handleVerdict;              //@synthesize handleVerdict=_handleVerdict - In the implementation block
-(void)executeVerdictHandlerWithFlow:(id)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(void)executeWithFlow:(id)arg1 context:(id)arg2 ;
-(id)initWithGetVerdictBlock:(/*^block*/id)arg1 handleVerdictBlock:(/*^block*/id)arg2 ;
-(void)enqueueWithFlow:(id)arg1 context:(id)arg2 ;
-(id)getVerdict;
-(id)handleVerdict;
@end
