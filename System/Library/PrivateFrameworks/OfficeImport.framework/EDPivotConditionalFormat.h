/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {

	unsigned long long mPriority;
	int mType;
	int mScope;
	EDCollection* mPivotAreas;

}
+(id)pivotConditionalFormat;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setScope:(int)arg1 ;
-(int)scope;
-(id)pivotAreas;
@end

