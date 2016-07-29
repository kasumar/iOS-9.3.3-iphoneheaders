/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class EDStyle, EDWorkbook;

@interface EMCellNumberMapper : CMMapper {

	double edValue;
	EDStyle* edStyle;
	EDWorkbook* workbook;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)initWithDoubleValue:(double)arg1 style:(id)arg2 workbook:(id)arg3 parent:(id)arg4 ;
-(id)formatValueAsNumber;
-(id)insertRedSpanIfNegativeAt:(id)arg1 ;
@end

