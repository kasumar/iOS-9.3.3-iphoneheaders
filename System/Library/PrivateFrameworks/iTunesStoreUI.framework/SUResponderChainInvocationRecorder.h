/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISInvocationRecorder.h>

@class Protocol;

@interface SUResponderChainInvocationRecorder : ISInvocationRecorder {

	Protocol* _protocol;

}
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)invokeInvocation:(id)arg1 ;
-(id)_targetForSelector:(SEL)arg1 sender:(id)arg2 ;
-(id)adjustedTargetForSelector:(SEL)arg1 ;
@end

