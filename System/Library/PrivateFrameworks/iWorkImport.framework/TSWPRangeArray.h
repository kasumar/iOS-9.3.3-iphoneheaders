/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSWPRangeArray : NSObject <NSCopying> {

	void* _rangeVectorOpaque;

}

@property (nonatomic,readonly) unsigned long long rangeCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) unsigned long long start; 
@property (nonatomic,readonly) unsigned long long finish; 
-(void)removeRange:(NSRange)arg1 ;
-(void)enumerateRangesInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithRangeVector:(const void*)arg1 ;
-(NSRange*)rangeReferenceAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(unsigned long long)start;
-(void)enumerateRangesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)rangeCount;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)finish;
-(id)initWithRange:(NSRange)arg1 ;
-(void)addRange:(NSRange)arg1 ;
@end

