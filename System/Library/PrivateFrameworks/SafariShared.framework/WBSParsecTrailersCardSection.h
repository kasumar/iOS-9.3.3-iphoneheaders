/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecCardSection.h>

@class NSString, NSArray;

@interface WBSParsecTrailersCardSection : WBSParsecCardSection {

	NSString* _title;
	NSArray* _trailers;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * trailers;                 //@synthesize trailers=_trailers - In the implementation block
+(id)_specializedCardSectionSchema;
-(NSString *)title;
-(id)_initWithDictionary:(id)arg1 ;
-(NSArray *)trailers;
@end

