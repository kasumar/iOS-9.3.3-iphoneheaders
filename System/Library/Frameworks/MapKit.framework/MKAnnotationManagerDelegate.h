/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MKAnnotationManagerDelegate <NSObject>
@optional
-(void)annotationManager:(id)arg1 willDeselectAnnotationRepresentation:(id)arg2;

@required
-(void)annotationManager:(id)arg1 didDeselectAnnotationRepresentation:(id)arg2;
-(void)annotationManager:(id)arg1 didSelectAnnotationRepresentation:(id)arg2;
-(void)annotationManager:(id)arg1 didAddAnnotationRepresentations:(id)arg2;
-(id)annotationManager:(id)arg1 representationForAnnotation:(id)arg2;

@end

