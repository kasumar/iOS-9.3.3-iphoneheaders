/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeCollectionEntry : RWIProtocolJSONObject

@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * value; 
@property (nonatomic,retain) RWIProtocolRuntimeRemoteObject * key; 
-(RWIProtocolRuntimeRemoteObject *)key;
-(RWIProtocolRuntimeRemoteObject *)value;
-(void)setValue:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(void)setKey:(RWIProtocolRuntimeRemoteObject *)arg1 ;
-(id)initWithValue:(id)arg1 ;
@end

