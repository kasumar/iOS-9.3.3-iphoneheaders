/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CIEnhancementHistogram : NSObject {

	double hist[256];

}
+(id)histogramFromData:(const double*)arg1 ;
+(id)histogramFromFloatData:(const float*)arg1 ;
+(id)histogramFromDoubleData:(const double*)arg1 ;
-(const double*)values;
@end
