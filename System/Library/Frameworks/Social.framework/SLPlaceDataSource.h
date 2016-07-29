/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SLPlaceDataSource
@property (__weak) NSObject*<SLPlaceDataSourceDelegate> delegate; 
@required
-(void)setDelegate:(id)arg1;
-(NSObject*<SLPlaceDataSourceDelegate>)delegate;
-(id)currentLocation;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;

@end

