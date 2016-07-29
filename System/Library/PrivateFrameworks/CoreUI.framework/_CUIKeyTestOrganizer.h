/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSArray;

@interface _CUIKeyTestOrganizer : NSObject {

	renditionkeytoken originalKey[16];
	NSArray* orderedNonZeroFlexibleAttributes;
	unsigned long long flexAttributesCount;
	renditionkeytoken testKey[16];
	unsigned long long chooseCount;
	unsigned long long subchooseCount;

}
-(unsigned long long)_attributeToBumpIndex;
-(BOOL)_bumpTestKeyAttributeIndex:(unsigned long long)arg1 ;
-(id)_nonZeroFlexibleAttributesInKey:(const renditionkeytoken*)arg1 ;
-(void)_bumpTestKey;
-(id)initWithRenditionKey:(const renditionkeytoken*)arg1 ;
-(void)dealloc;
-(renditionkeytoken*)nextKey;
@end

