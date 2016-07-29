/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPLocalDeviceSecretHandlerProtocol.h>

@class CDPContext;

@interface CDPDLocalDeviceSecretHandler : NSObject <CDPLocalDeviceSecretHandlerProtocol> {

	/*^block*/id _validationHandler;
	CDPContext* _context;

}

@property (nonatomic,readonly) CDPContext * context;              //@synthesize context=_context - In the implementation block
-(CDPContext *)context;
-(id)initWithContext:(id)arg1 validSecretHandler:(/*^block*/id)arg2 ;
-(void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2 ;
-(void)userDidCancelWithError:(id)arg1 ;
@end

