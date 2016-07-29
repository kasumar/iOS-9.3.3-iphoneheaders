/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemPhoto.h>

@class NSString, NSURL, GEOPhoto, GEOPDCaptionedPhoto;

@interface _GEOPlaceDataCaptionedPhoto : NSObject <GEOMapItemPhoto> {

	GEOPDCaptionedPhoto* _captionedPhoto;
	GEOPhoto* _geoPhoto;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * author; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * licenseDescription; 
@property (nonatomic,readonly) NSURL * licenseURL; 
@property (nonatomic,readonly) BOOL displayFullPhotoInline; 
@property (nonatomic,readonly) GEOPhoto * geoPhoto;                        //@synthesize geoPhoto=_geoPhoto - In the implementation block
-(void)dealloc;
-(BOOL)displayFullPhotoInline;
-(GEOPhoto *)geoPhoto;
-(NSURL *)licenseURL;
-(NSString *)caption;
-(NSString *)licenseDescription;
-(NSString *)author;
-(id)initWithCaptionedPhoto:(id)arg1 ;
@end

