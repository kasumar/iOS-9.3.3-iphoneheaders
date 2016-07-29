/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@class UIImage, NSString, NSLock, NSMutableArray, MKMapSnapshotRequest;

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {

	UIImage* _lastSnapshot;
	NSString* _lastAttributionString;
	NSLock* _requestLock;
	NSMutableArray* _requests;
	MKMapSnapshotRequest* _servingRequest;

}

@property (nonatomic,retain) MKMapSnapshotRequest * servingRequest;              //@synthesize servingRequest=_servingRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsHighResolutionSnapshots;
+(BOOL)supportsSharingThumbnails;
-(void)dealloc;
-(id)init;
-(id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2 ;
-(id)_newSnapshotWithView:(id)arg1 ;
-(MKMapSnapshotRequest *)servingRequest;
-(void)_processRequest;
-(void)createSnapShotWithCoordinate:(SCD_Struct_MK0)arg1 zoomLevel:(unsigned long long)arg2 size:(CGSize)arg3 handler:(/*^block*/id)arg4 ;
-(void)flushRequestQueue;
-(void)createSnapShotWithCoordinate:(SCD_Struct_MK0)arg1 zoomLevel:(unsigned long long)arg2 size:(CGSize)arg3 requester:(id)arg4 context:(id)arg5 ;
-(void)_respondWithSnapshot;
-(void)setServingRequest:(MKMapSnapshotRequest *)arg1 ;
@end

