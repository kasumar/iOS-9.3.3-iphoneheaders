/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView;


@protocol MKCalloutSource <NSObject>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) UIView * leftCalloutAccessoryView; 
@property (nonatomic,retain,readonly) UIView * rightCalloutAccessoryView; 
@property (nonatomic,retain,readonly) UIView * detailCalloutAccessoryView; 
@optional
-(NSString *)subtitle;
-(UIView *)detailCalloutAccessoryView;
-(UIView *)rightCalloutAccessoryView;
-(UIView *)leftCalloutAccessoryView;

@required
-(id)title;
-(CGPoint*)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2;
-(id)debugAnchorPointString;
-(CGPoint*)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3;

@end

