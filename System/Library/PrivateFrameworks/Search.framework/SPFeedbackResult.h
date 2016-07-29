/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface SPFeedbackResult : NSObject <NSSecureCoding> {

	BOOL _topHit;
	BOOL _activityIsPublic;
	BOOL _hasAssociatedUserActivity;
	unsigned _domain;
	int _flags;
	NSString* _fbr;
	NSString* _activityIdentifier;
	NSString* _activityRequiredString;
	NSString* _activitySecondaryString;
	NSString* _activitybundleID;
	NSString* _activityTitle;
	NSData* _activityData;
	NSString* _activityType;
	NSDictionary* _attributes;
	NSData* _thumbnailData;
	NSString* _appShortVersion;
	NSString* _lastSearchQuery;
	NSString* _url;

}

@property (readonly) NSString * parsecString; 
@property (assign,nonatomic) unsigned domain;                                 //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) int flags;                                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL topHit;                                     //@synthesize topHit=_topHit - In the implementation block
@property (nonatomic,retain) NSString * fbr;                                  //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,retain) NSString * activityIdentifier;                   //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,retain) NSString * activityRequiredString;               //@synthesize activityRequiredString=_activityRequiredString - In the implementation block
@property (nonatomic,retain) NSString * activitySecondaryString;              //@synthesize activitySecondaryString=_activitySecondaryString - In the implementation block
@property (nonatomic,retain) NSString * activitybundleID;                     //@synthesize activitybundleID=_activitybundleID - In the implementation block
@property (nonatomic,retain) NSString * activityTitle;                        //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) NSData * activityData;                           //@synthesize activityData=_activityData - In the implementation block
@property (nonatomic,retain) NSString * activityType;                         //@synthesize activityType=_activityType - In the implementation block
@property (assign) BOOL activityIsPublic;                                     //@synthesize activityIsPublic=_activityIsPublic - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                       //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSData * thumbnailData;                          //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (nonatomic,retain) NSString * appShortVersion;                      //@synthesize appShortVersion=_appShortVersion - In the implementation block
@property (assign,nonatomic) BOOL hasAssociatedUserActivity;                  //@synthesize hasAssociatedUserActivity=_hasAssociatedUserActivity - In the implementation block
@property (nonatomic,retain) NSString * lastSearchQuery;                      //@synthesize lastSearchQuery=_lastSearchQuery - In the implementation block
@property (nonatomic,retain) NSString * url;                                  //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)topHitStringForDomain:(id)arg1 ;
-(NSString *)parsecString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)url;
-(NSString *)activityType;
-(unsigned)domain;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)activityTitle;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(NSData *)thumbnailData;
-(void)setThumbnailData:(NSData *)arg1 ;
-(void)setActivityTitle:(NSString *)arg1 ;
-(NSString *)lastSearchQuery;
-(BOOL)topHit;
-(NSString *)activityIdentifier;
-(NSString *)activityRequiredString;
-(NSString *)activitySecondaryString;
-(NSString *)activitybundleID;
-(NSData *)activityData;
-(BOOL)activityIsPublic;
-(NSString *)appShortVersion;
-(void)setAppShortVersion:(NSString *)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(void)setFlags:(int)arg1 ;
-(int)flags;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(void)setTopHit:(BOOL)arg1 ;
-(void)setActivitybundleID:(NSString *)arg1 ;
-(BOOL)hasAssociatedUserActivity;
-(void)setHasAssociatedUserActivity:(BOOL)arg1 ;
-(void)setActivityIsPublic:(BOOL)arg1 ;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(void)setActivityRequiredString:(NSString *)arg1 ;
-(void)setActivitySecondaryString:(NSString *)arg1 ;
-(void)setActivityData:(NSData *)arg1 ;
-(void)setLastSearchQuery:(NSString *)arg1 ;
@end

