/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface TSUIndexedStringStore : NSObject {

	int _lock;
	NSMutableDictionary* _indexByString;
	NSMutableArray* _stringByIndex;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(unsigned long long)indexForString:(id)arg1 ;
-(id)stringForIndex:(unsigned long long)arg1 ;
@end

