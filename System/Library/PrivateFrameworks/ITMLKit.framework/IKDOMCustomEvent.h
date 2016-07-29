/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKDOMEvent.h>
#import <libobjc.A.dylib/IKJSDOMCustomEvent.h>

@class IKJSObject, NSString, IKDOMNode, NSDate;

@interface IKDOMCustomEvent : IKDOMEvent <IKJSDOMCustomEvent> {

	IKJSObject* _detail;

}

@property (nonatomic,retain) IKJSObject * detail;                             //@synthesize detail=_detail - In the implementation block
@property (nonatomic,retain,readonly) NSString * type; 
@property (nonatomic,retain,readonly) IKDOMNode * target; 
@property (nonatomic,retain,readonly) IKDOMNode * currentTarget; 
@property (nonatomic,readonly) long long eventPhase; 
@property (nonatomic,readonly) BOOL bubbles; 
@property (nonatomic,readonly) BOOL cancelable; 
@property (nonatomic,readonly) NSDate * timeStamp; 
@property (nonatomic,readonly) BOOL defaultPrevented; 
-(void)setDetail:(IKJSObject *)arg1 ;
-(id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(BOOL)arg4 isCancelable:(BOOL)arg5 detail:(id)arg6 ;
-(id)initWithType:(id)arg1 eventInit:(id)arg2 ;
-(IKJSObject *)detail;
@end

