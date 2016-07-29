/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSDStroke;


@protocol TSTTableStrokeProviding <NSObject>
@property (nonatomic,readonly) TSDStroke * defaultHorizontalBorderStroke; 
@property (nonatomic,readonly) TSDStroke * defaultHorizontalBorderStrokeEvenIfNotVisible; 
@property (nonatomic,readonly) TSDStroke * defaultVerticalBorderStroke; 
@property (nonatomic,readonly) TSDStroke * bodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * bodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * bodyRowStrokeEvenIfNotVisible; 
@property (nonatomic,readonly) TSDStroke * headerColumnBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerColumnSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * headerRowSeparatorStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBorderStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyColumnStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowBodyRowStroke; 
@property (nonatomic,readonly) TSDStroke * footerRowSeparatorStroke; 
@required
-(TSDStroke *)headerRowSeparatorStroke;
-(TSDStroke *)bodyRowStroke;
-(TSDStroke *)footerRowSeparatorStroke;
-(TSDStroke *)headerColumnSeparatorStroke;
-(TSDStroke *)bodyColumnStroke;
-(TSDStroke *)headerRowBodyRowStroke;
-(TSDStroke *)headerRowBodyColumnStroke;
-(TSDStroke *)headerColumnBodyRowStroke;
-(TSDStroke *)headerColumnBodyColumnStroke;
-(TSDStroke *)footerRowBodyRowStroke;
-(TSDStroke *)footerRowBodyColumnStroke;
-(TSDStroke *)defaultHorizontalBorderStroke;
-(TSDStroke *)defaultVerticalBorderStroke;
-(TSDStroke *)defaultHorizontalBorderStrokeEvenIfNotVisible;
-(TSDStroke *)bodyRowStrokeEvenIfNotVisible;
-(TSDStroke *)headerColumnBorderStroke;
-(TSDStroke *)headerRowBorderStroke;
-(TSDStroke *)footerRowBorderStroke;

@end

