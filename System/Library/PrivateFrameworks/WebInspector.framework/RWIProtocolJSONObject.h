/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebInspector/WebInspector-Structs.h>
@interface RWIProtocolJSONObject : NSObject {

	RefPtr<Inspector::InspectorObject>* _inspectorObject;

}
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 ;
-(void)removeKey:(id)arg1 ;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(RefPtr<Inspector::InspectorObject>*)toInspectorObject;
-(id)initWithInspectorObject:(const InspectorObject*)arg1 ;
-(void)setInspectorArray:(RefPtr<Inspector::InspectorArray>*)arg1 forKey:(id)arg2 ;
-(RefPtr<Inspector::InspectorArray>*)inspectorArrayForKey:(id)arg1 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
@end

