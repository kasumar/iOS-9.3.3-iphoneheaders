/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOTransitSystem <NSObject>
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@required
-(NSString *)name;
-(unsigned long long)muid;
-(id<GEOTransitArtworkDataSource>)artwork;

@end

