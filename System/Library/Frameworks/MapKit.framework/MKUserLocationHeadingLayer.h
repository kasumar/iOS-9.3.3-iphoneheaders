/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:24 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class MKUserLocationView, CALayer;

@interface MKUserLocationHeadingLayer : CALayer {

	MKUserLocationView* _userLocationView;
	CALayer* _maskLayer;

}
+(id)headingLayerWithUserLocationView:(id)arg1 ;
-(id)_headingImage:(CGPoint*)arg1 ;
-(void)updateHeading:(double)arg1 ;
-(id)initWithUserLocationView:(id)arg1 ;
-(void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2 ;
-(void)_updateHeadingImage;
-(void)updateTintColor:(id)arg1 ;
@end

