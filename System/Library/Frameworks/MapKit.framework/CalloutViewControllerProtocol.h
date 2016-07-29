/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView;


@protocol CalloutViewControllerProtocol <NSObject>
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
@required
-(void)setLeftView:(id)arg1 animated:(BOOL)arg2;
-(void)setRightView:(id)arg1 animated:(BOOL)arg2;
-(void)setLeftView:(id)arg1;
-(void)setRightView:(id)arg1;
-(UIView *)leftView;
-(UIView *)rightView;
-(NSString *)calloutTitle;
-(void)setCalloutTitle:(id)arg1;
-(void)setDetailView:(id)arg1;
-(void)setCalloutSubtitle:(id)arg1 animated:(BOOL)arg2;
-(NSString *)calloutSubtitle;
-(void)setDetailView:(id)arg1 animated:(BOOL)arg2;
-(BOOL)canDisplayCompleteTitleWhenExpanded;
-(void)beginMapsTransitionMovingSideways;
-(void)setCalloutSubtitle:(id)arg1;
-(UIView *)detailView;

@end

