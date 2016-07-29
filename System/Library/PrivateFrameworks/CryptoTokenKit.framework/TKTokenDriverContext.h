/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>
#import <libobjc.A.dylib/TKTokenDriverProtocol.h>

@class NSString, TKTokenDriver;

@interface TKTokenDriverContext : NSExtensionContext <TKTokenDriverProtocol> {

	NSString* _instanceID;
	TKTokenDriver* _driver;
	NSString* _driverClassID;

}

@property (nonatomic,retain) TKTokenDriver * driver;                //@synthesize driver=_driver - In the implementation block
@property (nonatomic,retain) NSString * driverClassID;              //@synthesize driverClassID=_driverClassID - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)dealloc;
-(NSString *)driverClassID;
-(void)setDriver:(TKTokenDriver *)arg1 ;
-(void)setDriverClassID:(NSString *)arg1 ;
-(void)acquireTokenEndpointWithAttributes:(id)arg1 reply:(/*^block*/id)arg2 ;
-(TKTokenDriver *)driver;
@end

