/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libextension.dylib/NSExtensionContext.h>
#import <libobjc.A.dylib/NEExtensionProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionProviderHostProtocol.h>

@protocol NEExtensionProviderProtocol, NEExtensionProviderHostDelegate;
@class NSString;

@interface NEExtensionProviderHostContext : NSExtensionContext <NEExtensionProviderProtocol, NEExtensionProviderHostProtocol> {

	id<NEExtensionProviderProtocol> _vendorContext;
	NSString* _description;
	id<NEExtensionProviderHostDelegate> _delegate;

}

@property (__weak) id<NEExtensionProviderHostDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) int pid; 
@property (readonly) id<NEExtensionProviderProtocol> vendorContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setDelegate:(id<NEExtensionProviderHostDelegate>)arg1 ;
-(NSString *)description;
-(id<NEExtensionProviderHostDelegate>)delegate;
-(void)setDescription:(NSString *)arg1 ;
-(int)pid;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)wake;
-(void)dispose;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)startedWithError:(id)arg1 ;
-(id<NEExtensionProviderProtocol>)vendorContext;
-(id)copyValueForEntitlement:(id)arg1 ;
@end
