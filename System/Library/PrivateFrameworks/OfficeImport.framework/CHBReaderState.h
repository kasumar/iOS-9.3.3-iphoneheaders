/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CHBState.h>

@protocol CHAutoStyling;
@class EBReaderSheetState, OADColorScheme;

@interface CHBReaderState : CHBState {

	EBReaderSheetState* mEBReaderSheetState;
	XlChartBinaryReader* mXlReader;
	id<CHAutoStyling> mAutoStyling;
	int mAxisGroup;
	XlChartPlot* mXlCurrentPlot;
	int mXlCurrentPlotIndex;

}

@property (nonatomic,readonly) OADColorScheme * colorScheme; 
-(void)dealloc;
-(id)resources;
-(OADColorScheme *)colorScheme;
-(id)workbook;
-(void)setChart:(id)arg1 ;
-(XlChartPlot*)xlCurrentPlot;
-(int)axisGroup;
-(XlChartBinaryReader*)xlReader;
-(id)autoStyling;
-(const XlChartSeriesFormat*)xlCurrentDefaultSeriesFormat;
-(int)xlCurrentPlotIndex;
-(id)ebReaderSheetState;
-(void)setAxisGroup:(int)arg1 ;
-(int)xlPlotCount;
-(void)setXlCurrentPlotIndex:(int)arg1 ;
-(void)setXlCurrentPlot:(XlChartPlot*)arg1 ;
-(id)initWithEBReaderSheetState:(id)arg1 ;
-(const XlChartSeriesFormat*)defaultFormatForXlSeries:(const XlChartDataSeries*)arg1 ;
-(void)readAndCacheXlChartDataSeries;
@end

