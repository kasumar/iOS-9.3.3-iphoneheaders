/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSTextList : NSObject <NSCoding, NSCopying> {

	NSString* _markerFormat;
	unsigned long long _listFlags;
	long long _startIndex;
	void* _listSecondary;

}

@property (copy,readonly) NSString * markerFormat; 
@property (readonly) unsigned long long listOptions; 
@property (assign) long long startingItemNumber; 
+(id)_standardMarkerAttributesForAttributes:(id)arg1 ;
+(void)initialize;
-(BOOL)_isOrdered;
-(id)_markerForMarkerFormat:(id)arg1 itemNumber:(long long)arg2 isNumbered:(BOOL*)arg3 substitutionStart:(unsigned long long*)arg4 end:(unsigned long long*)arg5 specifierStart:(unsigned long long*)arg6 end:(unsigned long long*)arg7 ;
-(id)_unaffixedMarkerForItemNumber:(long long)arg1 ;
-(id)_markerAtIndex:(unsigned long long)arg1 inText:(id)arg2 ;
-(id)_markerTitle;
-(id)_markerPrefix;
-(id)_markerSpecifier;
-(id)_unaffixedMarkerFormat;
-(id)_unaffixedMarkerTitle;
-(id)_markerSuffix;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(void)setStartingItemNumber:(long long)arg1 ;
-(long long)startingItemNumber;
-(NSString *)markerFormat;
-(id)initWithMarkerFormat:(id)arg1 options:(unsigned long long)arg2 ;
-(id)markerForItemNumber:(long long)arg1 ;
-(unsigned long long)listOptions;
@end

