/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface SCROCallback : NSObject <NSCoding> {

	int _key;
	id _object;
	BOOL _isAtomic;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)key;
-(id)object;
-(id)initWithKey:(int)arg1 object:(id)arg2 ;
-(void)setIsAtomic:(BOOL)arg1 ;
-(BOOL)isAtomic;
-(void)postToHandler:(id)arg1 ;
@end

