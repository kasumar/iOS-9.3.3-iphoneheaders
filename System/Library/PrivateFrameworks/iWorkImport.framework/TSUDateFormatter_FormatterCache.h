/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMutableDictionary;

@interface TSUDateFormatter_FormatterCache : NSObject {

	NSLock* _dateFormatterCacheLock;
	NSMutableDictionary* _dateFormatterCache;

}
+(id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)dateFormatterStringFromDate:(id)arg1 withFormat:(id)arg2 locale:(id)arg3 ;
@end

