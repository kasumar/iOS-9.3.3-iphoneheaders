/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationProxy, NSDictionary, NSBundle, NSString, NSNumber, NSDate;

@interface GKApplicationProxy : NSObject {

	LSApplicationProxy* _lsProxy;
	NSDictionary* _metadata;

}

@property (nonatomic,retain,readonly) NSBundle * bundle; 
@property (nonatomic,retain,readonly) NSString * bundleVersion; 
@property (nonatomic,retain,readonly) NSString * bundleShortVersion; 
@property (nonatomic,retain,readonly) NSString * bundleID; 
@property (nonatomic,retain,readonly) NSNumber * adamID; 
@property (nonatomic,retain,readonly) NSNumber * externalVersion; 
@property (nonatomic,retain,readonly) NSDate * purchaseDate; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (nonatomic,retain) LSApplicationProxy * lsProxy;                                     //@synthesize lsProxy=_lsProxy - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
+(id)metadataForBundleURL:(id)arg1 ;
-(NSDate *)purchaseDate;
-(void)dealloc;
-(id)bundleURL;
-(NSBundle *)bundle;
-(NSString *)bundleVersion;
-(NSDictionary *)metadata;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)bundleID;
-(BOOL)isInstalled;
-(NSNumber *)adamID;
-(BOOL)isGameCenterEnabled;
-(BOOL)isRestricted;
-(NSNumber *)externalVersion;
-(NSString *)bundleShortVersion;
-(id)initWithBundleID:(id)arg1 ;
-(void)setLsProxy:(LSApplicationProxy *)arg1 ;
-(LSApplicationProxy *)lsProxy;
-(id)initWithProxy:(id)arg1 ;
@end

