/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSConcreteObservation.h>

@class NSObservableKeyPath;

@interface _NSKVO1Adaptor : _NSConcreteObservation {

	NSObservableKeyPath* kp;
	BOOL emitsChanges;

}
-(void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 changeKind:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5 indexes:(id)arg6 context:(void*)arg7 ;
-(id)initWithObservable:(id)arg1 observer:(id)arg2 keyPath:(id)arg3 ;
-(void)_setEmitsChanges:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)finishObserving;
-(void)remove;
@end

