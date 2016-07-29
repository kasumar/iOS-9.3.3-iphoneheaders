/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKMapItemMetadataRequest.h>

@interface MKMapItemMetadataDealRequest : MKMapItemMetadataRequest {

	/*^block*/id _dealHandler;

}

@property (nonatomic,copy) id dealHandler;              //@synthesize dealHandler=_dealHandler - In the implementation block
+(id)requestWithMapItem:(id)arg1 ;
-(id)url;
-(void)handleError:(id)arg1 ;
-(id)urlRequest;
-(id)dealHandler;
-(void)handleData:(id)arg1 ;
-(void)setDealHandler:(id)arg1 ;
@end

