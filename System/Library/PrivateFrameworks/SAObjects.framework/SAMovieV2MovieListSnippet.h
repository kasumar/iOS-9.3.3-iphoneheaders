/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SALocalSearchBusiness2;

@interface SAMovieV2MovieListSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * movieListCells; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (nonatomic,copy) NSString * title; 
+(id)movieListSnippet;
+(id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(SALocalSearchBusiness2 *)theater;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
-(NSArray *)movieListCells;
-(void)setMovieListCells:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

