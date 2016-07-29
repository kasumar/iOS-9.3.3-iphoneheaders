/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface MPMediaQuerySectionInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSArray* _sections;
	NSArray* _sectionIndexTitles;
	BOOL _hasUnknownSection;

}

@property (nonatomic,copy,readonly) NSArray * sections;               //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy) NSArray * sectionIndexTitles; 
@property (assign,nonatomic) BOOL hasUnknownSection;                  //@synthesize hasUnknownSection=_hasUnknownSection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)sectionIndexTitles;
-(NSArray *)sections;
-(void)setSectionIndexTitles:(NSArray *)arg1 ;
-(unsigned long long)indexOfSectionForSectionIndexTitleAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasUnknownSection;
-(void)setHasUnknownSection:(BOOL)arg1 ;
@end

