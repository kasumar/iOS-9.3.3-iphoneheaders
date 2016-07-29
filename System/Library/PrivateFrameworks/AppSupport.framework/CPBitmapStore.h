/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSCache, NSObject;

@interface CPBitmapStore : NSObject {

	NSString* _path;
	NSString* _imagePath;
	NSCache* _cache;
	int _version;
	NSString* _versionPath;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesBackground;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesDefault;
	BOOL _lockOnRead;

}

@property (nonatomic,readonly) int version; 
@property (assign,nonatomic) BOOL lockOnRead;                                //@synthesize lockOnRead=_lockOnRead - In the implementation block
@property (assign,nonatomic) unsigned long long cacheItemLimit; 
-(int)setVersion:(int)arg1 withOptions:(unsigned long long)arg2 ;
-(id)imageNameForKey:(id)arg1 inGroup:(id)arg2 ;
-(id)cacheNumberForKey:(id)arg1 ;
-(BOOL)findImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(BOOL)lockOnRead;
-(unsigned)memContentOffset;
-(BOOL)saveImageWithKey:(id)arg1 inGroup:(id)arg2 andInfo:(img*)arg3 ;
-(CGImageRef)_copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 format:(int)arg4 scale:(double)arg5 fillMem:(/*^block*/id)arg6 alternateCompletion:(/*^block*/id)arg7 ;
-(unsigned long long)cacheItemLimit;
-(CGImageRef)copyImageForKey:(id)arg1 ;
-(void)commitTxn;
-(void)removeImagesInGroups:(id)arg1 ;
-(void)dealloc;
-(void)commitTransaction;
-(int)setVersion:(int)arg1 ;
-(int)version;
-(id)initWithPath:(id)arg1 version:(int)arg2 ;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)storeImageForKey:(id)arg1 inGroup:(id)arg2 opaque:(BOOL)arg3 image:(CGImageRef)arg4 ;
-(void)removeImagesInGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)purge;
-(void)setLockOnRead:(BOOL)arg1 ;
-(void)setCacheItemLimit:(unsigned long long)arg1 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 data:(id)arg6 ;
-(CGImageRef)copyAndStoreImageForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 draw:(/*^block*/id)arg6 ;
-(void)storeGrayscaleImageDataForKey:(id)arg1 inGroup:(id)arg2 withSize:(CGSize)arg3 opaque:(BOOL)arg4 scale:(double)arg5 data:(id)arg6 ;
-(unsigned long long)imageCount;
-(id)allGroups;
-(id)imagePath;
-(id)_versionPath;
@end

