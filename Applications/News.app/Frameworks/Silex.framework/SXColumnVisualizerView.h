/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <QuartzCore/CALayer.h>

@class SXColumnLayout;

@interface SXColumnVisualizerView : CALayer {

	SXColumnLayout* _columnLayout;

}

@property (nonatomic,retain) SXColumnLayout * columnLayout;              //@synthesize columnLayout=_columnLayout - In the implementation block
-(SXColumnLayout *)columnLayout;
-(void)setColumnLayout:(SXColumnLayout *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

