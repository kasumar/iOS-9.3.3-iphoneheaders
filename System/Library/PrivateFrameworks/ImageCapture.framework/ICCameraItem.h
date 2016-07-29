/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class ICCameraDevice, ICCameraFolder, NSString, NSDate, NSDictionary, NSMutableDictionary;

@interface ICCameraItem : NSObject {

	void* _itemProperties;

}

@property (readonly) ICCameraDevice * device; 
@property (readonly) ICCameraFolder * parentFolder; 
@property (readonly) NSString * name; 
@property (readonly) NSString * UTI; 
@property (getter=isLocked) BOOL locked; 
@property (readonly) NSDate * creationDate; 
@property (readonly) NSDate * modificationDate; 
@property (readonly) CGImageRef thumbnail; 
@property (readonly) NSDictionary * metadata; 
@property (readonly) NSMutableDictionary * userData; 
@property (readonly) BOOL hasThumbnail; 
@property (readonly) BOOL hasMetadata; 
@property (readonly) NSString * fileSystemPath; 
-(BOOL)isCameraFile;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)isLocked;
-(void)setLocked:(BOOL)arg1 ;
-(NSDate *)modificationDate;
-(BOOL)hasMetadata;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSMutableDictionary *)userData;
-(CGImageRef)thumbnail;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setModificationDate:(NSDate *)arg1 ;
-(BOOL)hasThumbnail;
-(id)initWithName:(id)arg1 parentFolder:(id)arg2 device:(id)arg3 ;
-(void)appendToPath:(id)arg1 ;
-(NSString *)fileSystemPath;
-(void)requestMetadata;
-(void)requestThumbnail;
-(void)flushMetadataCache;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)flushThumbnailCache;
-(ICCameraFolder *)parentFolder;
-(ICCameraDevice *)device;
-(void)finalize;
@end

