/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSKeyboard.h>
@class NSString;


@protocol IKJSKeyboard <JSExport>
@property (nonatomic,copy) NSString * text; 
@required
-(NSString *)text;
-(void)setText:(id)arg1;

@end


@protocol IKAppKeyboardBridge;
@class NSString;

@interface IKJSKeyboard : IKJSObject <IKJSKeyboard> {

	id<IKAppKeyboardBridge> _appBridge;

}

@property (nonatomic,retain) id<IKAppKeyboardBridge> appBridge;              //@synthesize appBridge=_appBridge - In the implementation block
@property (nonatomic,copy) NSString * text; 
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)jsTextDidChange;
-(void)setAppBridge:(id<IKAppKeyboardBridge>)arg1 ;
-(id<IKAppKeyboardBridge>)appBridge;
@end

