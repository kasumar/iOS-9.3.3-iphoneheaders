/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKAchievementInternal, UIImage, NSString;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {

	GKAchievementInternal* _internal;
	UIImage* _image;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,retain,readonly) NSString * groupIdentifier; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * achievedDescription; 
@property (nonatomic,copy,readonly) NSString * unachievedDescription; 
@property (nonatomic,readonly) long long maximumPoints; 
@property (getter=isHidden,nonatomic,readonly) BOOL hidden; 
@property (getter=isReplayable,nonatomic,readonly) BOOL replayable; 
@property (nonatomic,retain) UIImage * image;                                      //@synthesize image=_image - In the implementation block
@property (retain) GKAchievementInternal * internal;                               //@synthesize internal=_internal - In the implementation block
+(id)incompleteAchievementImage;
+(id)placeholderCompletedAchievementImage;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(id)_achievementDescriptionFromGame:(id)arg1 propertyListDictionary:(id)arg2 ;
+(id)_loadLocalAchievementDescriptionsForGame:(id)arg1 ;
+(void)loadAchievementDescriptionsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imageURL;
-(void)showBanner;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UIImage *)image;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKAchievementInternal *)arg1 ;
-(id)imageNameForIcon;
-(GKAchievementInternal *)internal;
-(id)game;
@end

