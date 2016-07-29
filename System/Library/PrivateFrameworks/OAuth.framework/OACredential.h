/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OAuth.framework/OAuth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OACredential : NSObject {

	NSString* _consumerKey;
	NSString* _consumerSecret;
	NSString* _oauthToken;
	NSString* _oauthTokenSecret;

}

@property (nonatomic,copy) NSString * consumerKey;                   //@synthesize consumerKey=_consumerKey - In the implementation block
@property (nonatomic,copy) NSString * consumerSecret;                //@synthesize consumerSecret=_consumerSecret - In the implementation block
@property (nonatomic,copy) NSString * oauthToken;                    //@synthesize oauthToken=_oauthToken - In the implementation block
@property (nonatomic,copy) NSString * oauthTokenSecret;              //@synthesize oauthTokenSecret=_oauthTokenSecret - In the implementation block
-(id)signingKey;
-(void)dealloc;
-(NSString *)consumerKey;
-(NSString *)consumerSecret;
-(void)setOauthToken:(NSString *)arg1 ;
-(NSString *)oauthToken;
-(void)setConsumerKey:(NSString *)arg1 ;
-(void)setOauthTokenSecret:(NSString *)arg1 ;
-(void)setConsumerSecret:(NSString *)arg1 ;
-(NSString *)oauthTokenSecret;
@end

