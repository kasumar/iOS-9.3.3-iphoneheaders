/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SearchUITableLayoutInfo : NSObject {

	NSArray* _columnWidths;
	NSArray* _columnsWithEqualWidths;
	NSArray* _columnSpacing;
	NSArray* _internalAlignments;
	long long _firstTrailingIndex;

}

@property (retain) NSArray * columnWidths;                        //@synthesize columnWidths=_columnWidths - In the implementation block
@property (retain) NSArray * columnsWithEqualWidths;              //@synthesize columnsWithEqualWidths=_columnsWithEqualWidths - In the implementation block
@property (retain) NSArray * columnSpacing;                       //@synthesize columnSpacing=_columnSpacing - In the implementation block
@property (retain) NSArray * internalAlignments;                  //@synthesize internalAlignments=_internalAlignments - In the implementation block
@property (assign) long long firstTrailingIndex;                  //@synthesize firstTrailingIndex=_firstTrailingIndex - In the implementation block
-(NSArray *)internalAlignments;
-(NSArray *)columnsWithEqualWidths;
-(NSArray *)columnWidths;
-(void)setFirstTrailingIndex:(long long)arg1 ;
-(long long)firstTrailingIndex;
-(void)setColumnWidths:(NSArray *)arg1 ;
-(void)setColumnsWithEqualWidths:(NSArray *)arg1 ;
-(void)setInternalAlignments:(NSArray *)arg1 ;
-(void)setColumnSpacing:(NSArray *)arg1 ;
-(NSArray *)columnSpacing;
@end

