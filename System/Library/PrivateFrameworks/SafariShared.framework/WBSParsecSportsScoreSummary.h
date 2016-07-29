/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecModel.h>

@class NSArray, NSString;

@interface WBSParsecSportsScoreSummary : WBSParsecModel {

	NSArray* _images;
	NSString* _subtitle;

}

@property (nonatomic,copy,readonly) NSArray * images;                 //@synthesize images=_images - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)images;
-(NSString *)subtitle;
@end
