/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class TSWPStorage, NSArray;

@interface TSWPStorageChildEnumerator : NSEnumerator {

	TSWPStorage* _storage;
	unsigned _index;
	NSArray* _charOffsetArray;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithStorage:(id)arg1 ;
@end

