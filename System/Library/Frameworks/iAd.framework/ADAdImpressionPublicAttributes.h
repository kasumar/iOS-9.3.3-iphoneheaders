/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding> {

	BOOL _unbranded;
	BOOL _hasAction;
	NSString* _accessibilityLabel;
	double _skipThreshold;
	double _minimumIntervalBetweenPresentations;
	NSArray* _videoAssets;
	NSString* _uniqueIdentifier;
	NSURL* _audioURL;
	NSURL* _staticImageURL;
	NSURL* _logoImageURL;
	NSString* _headlineForLCD;
	NSString* _descriptionForLCD;
	NSArray* _nativeMetadata;

}

@property (assign,nonatomic) BOOL unbranded;                                          //@synthesize unbranded=_unbranded - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                             //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (assign,nonatomic) double skipThreshold;                                    //@synthesize skipThreshold=_skipThreshold - In the implementation block
@property (assign,nonatomic) double minimumIntervalBetweenPresentations;              //@synthesize minimumIntervalBetweenPresentations=_minimumIntervalBetweenPresentations - In the implementation block
@property (nonatomic,retain) NSArray * videoAssets;                                   //@synthesize videoAssets=_videoAssets - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                               //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasAction;                                          //@synthesize hasAction=_hasAction - In the implementation block
@property (nonatomic,retain) NSURL * audioURL;                                        //@synthesize audioURL=_audioURL - In the implementation block
@property (nonatomic,retain) NSURL * staticImageURL;                                  //@synthesize staticImageURL=_staticImageURL - In the implementation block
@property (nonatomic,retain) NSURL * logoImageURL;                                    //@synthesize logoImageURL=_logoImageURL - In the implementation block
@property (nonatomic,copy) NSString * headlineForLCD;                                 //@synthesize headlineForLCD=_headlineForLCD - In the implementation block
@property (nonatomic,copy) NSString * descriptionForLCD;                              //@synthesize descriptionForLCD=_descriptionForLCD - In the implementation block
@property (nonatomic,retain) NSArray * nativeMetadata;                                //@synthesize nativeMetadata=_nativeMetadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(void)setHasAction:(BOOL)arg1 ;
-(BOOL)hasAction;
-(NSURL *)audioURL;
-(double)skipThreshold;
-(NSArray *)videoAssets;
-(NSURL *)staticImageURL;
-(NSURL *)logoImageURL;
-(NSString *)headlineForLCD;
-(NSString *)descriptionForLCD;
-(NSArray *)nativeMetadata;
-(BOOL)unbranded;
-(double)minimumIntervalBetweenPresentations;
-(void)setUnbranded:(BOOL)arg1 ;
-(void)setSkipThreshold:(double)arg1 ;
-(void)setMinimumIntervalBetweenPresentations:(double)arg1 ;
-(void)setVideoAssets:(NSArray *)arg1 ;
-(void)setStaticImageURL:(NSURL *)arg1 ;
-(void)setLogoImageURL:(NSURL *)arg1 ;
-(void)setHeadlineForLCD:(NSString *)arg1 ;
-(void)setDescriptionForLCD:(NSString *)arg1 ;
-(void)setNativeMetadata:(NSArray *)arg1 ;
-(void)setAudioURL:(NSURL *)arg1 ;
@end

