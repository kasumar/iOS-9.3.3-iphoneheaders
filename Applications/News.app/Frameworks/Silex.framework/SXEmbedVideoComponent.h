/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXComponent.h>

@class NSURL, NSString;

@interface SXEmbedVideoComponent : SXComponent

@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * accessibilityCaption; 
+(id)typeString;
-(NSString *)accessibilityCaption;
-(NSString *)caption;
-(NSURL *)URL;
-(double)aspectRatio;
-(Class)componentViewClass;
-(id)URLWithValue:(id)arg1 withType:(int)arg2 ;
@end

