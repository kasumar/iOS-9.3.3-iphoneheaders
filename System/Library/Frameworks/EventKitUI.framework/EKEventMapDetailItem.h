/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class UITableViewCell, MKMapView, UIView, CLLocation, NSString;

@interface EKEventMapDetailItem : EKEventDetailItem <MKMapViewDelegate> {

	UITableViewCell* _cell;
	MKMapView* _mapView;
	UIView* _overlayView;
	UIView* _loadingView;
	CLLocation* _location;
	UITableViewCell* _oldCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2 ;
-(double)_mapHeight;
-(id)_mapRelatedViewConstraintsForMapRelatedView:(id)arg1 inCell:(id)arg2 ;
-(void)_setAnnotationForEventLocation;
-(void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2 ;
-(void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2 ;
-(void)mapViewWillStartRenderingMap:(id)arg1 ;
-(void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(BOOL)arg2 ;
@end

