/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableArray;

@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer {

	NSMutableArray* _results;

}
-(id)init;
-(id)results;
-(id)convertQuickTimeVideoOrientationToUIOrientation:(long long)arg1 ;
-(int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2 ;
@end

