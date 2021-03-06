/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <Foundation/NSOperation.h>

@class UIImage, NSError, NSURL;

@interface QLThumbnailCreationOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;
	UIImage* _image;
	NSError* _error;
	NSURL* _documentURL;
	double _maximumDimension;
	double _scaleFactor;
	unsigned long long _useMode;
	CGRect _contentRect;

}

@property (assign) CGRect contentRect;                      //@synthesize contentRect=_contentRect - In the implementation block
@property (retain) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (retain) NSURL * documentURL;                     //@synthesize documentURL=_documentURL - In the implementation block
@property (assign) double maximumDimension;                 //@synthesize maximumDimension=_maximumDimension - In the implementation block
@property (assign) double scaleFactor;                      //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign) unsigned long long useMode;              //@synthesize useMode=_useMode - In the implementation block
-(BOOL)isConcurrent;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(void)start;
-(CGRect)contentRect;
-(void)setContentRect:(CGRect)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(void)main;
-(void)setDocumentURL:(NSURL *)arg1 ;
-(NSURL *)documentURL;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setFinished:(BOOL)arg1 ;
-(void)checkIfThumbnailExistsAtPhysicalURL:(id)arg1 ;
-(void)retrieveThumbnailForPhysicalURL:(id)arg1 hasThumbnailInIndex:(BOOL)arg2 ;
-(unsigned long long)useMode;
-(void)setUseMode:(unsigned long long)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(BOOL)_finishIfCancelled;
-(void)setExecuting:(BOOL)arg1 ;
-(double)maximumDimension;
-(void)setMaximumDimension:(double)arg1 ;
-(void)_finish;
@end

