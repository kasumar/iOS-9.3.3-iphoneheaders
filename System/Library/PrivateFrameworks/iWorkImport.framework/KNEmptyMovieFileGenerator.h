/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface KNEmptyMovieFileGenerator : NSObject {

	NSURL* mGeneratedFileURL;
	double mDuration;

}

@property (nonatomic,readonly) NSURL * generatedFileURL; 
-(id)initWithGeneratedFileURL:(id)arg1 duration:(double)arg2 ;
-(NSURL *)generatedFileURL;
-(void)generateFileWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
@end

