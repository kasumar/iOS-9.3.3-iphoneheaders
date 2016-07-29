/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@class NSMethodSignature;

@interface NSInvocation : NSObject {

	void* _frame;
	void* _retdata;
	id _signature;
	id _container;
	unsigned char _retainedArgs;
	unsigned char _reserved[15];

}

@property (retain,readonly) NSMethodSignature * methodSignature; 
@property (readonly) BOOL argumentsRetained; 
@property (assign) id target; 
@property (assign) SEL selector; 
+(id)_gkInvocationWithBlock:(id)arg1 ;
+(id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object:(id)arg3 ;
+(id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 ;
+(id)mf_invocationWithSelector:(SEL)arg1 target:(id)arg2 object1:(id)arg3 object2:(id)arg4 ;
+(id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 arguments:(char*)arg3 ;
+(id)_mapkit_invocationWithSelector:(SEL)arg1 target:(id)arg2 ;
+(id)_invocationWithMethodSignature:(id)arg1 frame:(void*)arg2 ;
+(id)invocationWithMethodSignature:(id)arg1 ;
-(BOOL)_gkHasReplyBlock;
-(void)_gkInvokeOnce;
-(void)_gkCopyArguments;
-(id)_gkReplyHandlerInvocation;
-(void)_gkCallbackWithError:(id)arg1 queue:(id)arg2 ;
-(void)_gkInvokeOnceWithTarget:(id)arg1 ;
-(void)_gkClearCopiedArguments;
-(void)_gkPrepareForCallWithError:(id)arg1 ;
-(void)_gkClearTarget;
-(void)_gkPrintBlockSignature;
-(void)__gkPrepareForFakeCallbackWithNoData:(BOOL)arg1 orError:(id)arg2 ;
-(void)_gkClearArgumentAtIndex:(unsigned long long)arg1 ;
-(BOOL)mf_shouldLogInvocation;
-(BOOL)wantsReturnValue;
-(void)_webkit_invokeAndHandleException:(id)arg1 ;
-(BOOL)_hasBlockArgument;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(id)debugDescription;
-(void)invokeSuper;
-(void)_addAttachedObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)invoke;
-(void)setTarget:(id)arg1 ;
-(void)setSelector:(SEL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)target;
-(SEL)selector;
-(void)retainArguments;
-(void)invokeWithTarget:(id)arg1 ;
-(void)getReturnValue:(void*)arg1 ;
-(NSMethodSignature *)methodSignature;
-(void)getArgument:(void*)arg1 atIndex:(long long)arg2 ;
-(void)setReturnValue:(void*)arg1 ;
-(void)invokeUsingIMP:(/*function pointer*/void*)arg1 ;
-(BOOL)argumentsRetained;
@end

