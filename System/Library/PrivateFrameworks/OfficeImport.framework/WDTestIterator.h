/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDIterator.h>

@class WDIterator;

@interface WDTestIterator : WDIterator {

	WDIterator* mIterator;
	id mNext;

}
-(id)next;
-(void)dealloc;
-(id)initWithIterator:(id)arg1 ;
-(BOOL)test:(id)arg1 ;
-(BOOL)hasNext;
@end

