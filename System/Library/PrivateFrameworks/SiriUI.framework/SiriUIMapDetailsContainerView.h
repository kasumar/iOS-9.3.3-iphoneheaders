/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SiriUIMapDetailsContainerView : UIView {

	BOOL _autoCenteringDisabled;
	UIView* _detailsView;
	UIView* _mapView;
	UIEdgeInsets _backgroundInsets;

}

@property (nonatomic,retain) UIView * detailsView;                       //@synthesize detailsView=_detailsView - In the implementation block
@property (nonatomic,retain) UIView * mapView;                           //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) BOOL autoCenteringDisabled;                 //@synthesize autoCenteringDisabled=_autoCenteringDisabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets backgroundInsets;              //@synthesize backgroundInsets=_backgroundInsets - In the implementation block
-(void)layoutSubviews;
-(void)setMapView:(UIView *)arg1 ;
-(UIView *)mapView;
-(BOOL)autoCenteringDisabled;
-(void)setDetailsView:(UIView *)arg1 ;
-(UIView *)detailsView;
-(void)setAutoCenteringDisabled:(BOOL)arg1 ;
-(UIEdgeInsets)backgroundInsets;
-(void)setBackgroundInsets:(UIEdgeInsets)arg1 ;
@end

