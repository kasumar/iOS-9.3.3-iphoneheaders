/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPLayerDelegateProxyDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@interface TPLayerDelegateProxy : NSObject {

	id<TPLayerDelegateProxyDelegate> _delegate;

}
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(void)clearDelegate;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
@end

