/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/Bulletin.h>

@class NSArray;

@interface MediaSocialBulletin : Bulletin {

	NSArray* _mediaTypes;
	long long _numberOfPosts;

}

@property (nonatomic,copy) NSArray * mediaTypes;                   //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign,nonatomic) long long numberOfPosts;              //@synthesize numberOfPosts=_numberOfPosts - In the implementation block
-(long long)numberOfPosts;
-(void)setNumberOfPosts:(long long)arg1 ;
-(id)initWithBulletinDictionary:(id)arg1 ;
-(id)copyBulletinDictionary;
-(void)setMediaTypes:(NSArray *)arg1 ;
-(NSArray *)mediaTypes;
@end

