/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class OITSULinkedPointerSetEntry;

@interface OITSULinkedPointerSetReverseEnumerator : NSEnumerator {

	OITSULinkedPointerSetEntry* mTail;
	OITSULinkedPointerSetEntry* mLastUsed;

}
-(id)nextObject;
-(id)initWithLastEntry:(id)arg1 ;
@end
