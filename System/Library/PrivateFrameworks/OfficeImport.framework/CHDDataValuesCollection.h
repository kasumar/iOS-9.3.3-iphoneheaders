/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CHDDataValuesCollection : NSObject {

	CFDataRef mPackedValues;
	unsigned long long mDataValueCount;
	CFDictionaryRef mIndexToDataValueMap;
	BOOL mContainsStringValue;

}
-(void)cleanup;
-(void)setupBufferForValues:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)dataValueAtIndex:(unsigned long long)arg1 ;
-(BOOL)addDataPoint:(CHDDataPoint*)arg1 ;
-(void)finishReading;
-(id)initWithDataPointCount:(unsigned long long)arg1 ;
-(CHDDataPoint*)dataPointAtIndex:(unsigned long long)arg1 ;
-(CHDDataPoint*)dataPointWithIndex:(unsigned long long)arg1 ;
-(void)resetWithDataPointCount:(unsigned long long)arg1 ;
-(BOOL)addDataValue:(id)arg1 ;
-(id)contentFormatAtIndex:(unsigned long long)arg1 resources:(id)arg2 ;
-(id)dataValueWithIndex:(unsigned long long)arg1 ;
-(BOOL)containsStringValue;
@end

