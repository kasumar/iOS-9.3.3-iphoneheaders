/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSApplication.h>

@protocol IKJSApplication <JSExport>
@required
-(void)reload:(id)arg1 :(id)arg2;

@end


@interface IKJSApplication : IKJSObject <IKJSApplication>
-(void)launchAppWithOptions:(id)arg1 ;
-(void)suspendAppWithOptions:(id)arg1 ;
-(void)resumeAppWithOptions:(id)arg1 ;
-(void)openURLWithOptions:(id)arg1 ;
-(void)exitAppWithOptions:(id)arg1 ;
-(void)dispatchErrorWithMessage:(id)arg1 sourceURL:(id)arg2 line:(id)arg3 ;
-(void)reload:(id)arg1 :(id)arg2 ;
@end
