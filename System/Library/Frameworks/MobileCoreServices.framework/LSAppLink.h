/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, LSApplicationProxy;

@interface LSAppLink : NSObject <NSSecureCoding> {

	NSURL* _URL;
	LSApplicationProxy* _targetApplicationProxy;

}

@property (assign) long long openStrategy; 
@property (copy) NSURL * URL;                                                //@synthesize URL=_URL - In the implementation block
@property (retain) LSApplicationProxy * targetApplicationProxy;              //@synthesize targetApplicationProxy=_targetApplicationProxy - In the implementation block
+(BOOL)URLComponentsAreValidForAppLinks:(id)arg1 error:(id*)arg2 ;
+(void)considerPlugInClassAtIndex:(unsigned long long)arg1 plugInClasses:(id)arg2 URLComponents:(id)arg3 XPCConnection:(id)arg4 previousPlugInError:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
+(id)dispatchQueue;
+(long long)_openStrategyForBundleIdentifier:(id)arg1 ;
+(BOOL)_shouldAppLinkOpenWithStrategy:(long long)arg1 XPCConnection:(id)arg2 ;
+(BOOL)_XPCConnectionIsBrowser:(id)arg1 ;
+(void)_setOpenStrategy:(long long)arg1 forBundleIdentifier:(id)arg2 XPCConnection:(id)arg3 ;
+(void)_getAppLinkWithURL:(id)arg1 requireEntitlement:(BOOL)arg2 XPCConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)_appLinkWithURL:(id)arg1 applicationProxy:(id)arg2 plugIn:(id)arg3 error:(id*)arg4 ;
+(void)_openWithState:(id)arg1 XPCConnection:(id)arg2 machPort:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)setShouldHandleURL:(id)arg1 fromBrowser:(BOOL)arg2 asAppLink:(BOOL)arg3 ;
+(void)openWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(BOOL)supportsSecureCoding;
+(void)getAppLinkWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)openInWebBrowser:(BOOL)arg1 setOpenStrategy:(long long)arg2 webBrowserState:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setOpenStrategy:(long long)arg1 ;
-(void)openInWebBrowser:(BOOL)arg1 setAppropriateOpenStrategyAndWebBrowserState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(long long)openStrategy;
-(void)setTargetApplicationProxy:(LSApplicationProxy *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(NSURL *)URL;
-(LSApplicationProxy *)targetApplicationProxy;
-(void)setURL:(NSURL *)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
@end

