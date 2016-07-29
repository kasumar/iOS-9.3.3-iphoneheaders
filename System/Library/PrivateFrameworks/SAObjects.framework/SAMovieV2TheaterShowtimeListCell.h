/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SADistance, SAMovieV2ShowtimeSnippet, NSString;

@interface SAMovieV2TheaterShowtimeListCell : SADomainObject {

	NSArray* _displayableShowtimes;

}

@property (assign,nonatomic) BOOL bookable; 
@property (nonatomic,copy) NSArray * displayableShowtimes;                            //@synthesize displayableShowtimes=_displayableShowtimes - In the implementation block
@property (nonatomic,retain) SADistance * relativeDistance; 
@property (nonatomic,retain) SAMovieV2ShowtimeSnippet * showtimeSnippet; 
@property (nonatomic,copy) NSString * theaterName; 
+(id)theaterShowtimeListCell;
+(id)theaterShowtimeListCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)displayableShowtimes;
-(void)setDisplayableShowtimes:(NSArray *)arg1 ;
-(BOOL)bookable;
-(void)setBookable:(BOOL)arg1 ;
-(SADistance *)relativeDistance;
-(void)setRelativeDistance:(SADistance *)arg1 ;
-(SAMovieV2ShowtimeSnippet *)showtimeSnippet;
-(void)setShowtimeSnippet:(SAMovieV2ShowtimeSnippet *)arg1 ;
-(NSString *)theaterName;
-(void)setTheaterName:(NSString *)arg1 ;
-(id)encodedClassName;
@end

