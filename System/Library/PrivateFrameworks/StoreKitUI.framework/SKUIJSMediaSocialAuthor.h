/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIJSMediaSocialAuthor.h>
@class NSString, NSArray, NSDictionary;


@protocol SKUIJSMediaSocialAuthor <JSExport>
@property (nonatomic,readonly) NSString * dsId; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) NSString * entityType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * permissions; 
@property (nonatomic,readonly) NSDictionary * storePlatformData; 
@required
-(NSString *)name;
-(NSString *)entityType;
-(NSArray *)permissions;
-(NSDictionary *)storePlatformData;
-(NSString *)dsId;
-(NSString *)entityIdentifier;

@end


@class NSString, NSArray, NSDictionary, SKUIMediaSocialAuthor;

@interface SKUIJSMediaSocialAuthor : NSObject <SKUIJSMediaSocialAuthor> {

	SKUIMediaSocialAuthor* _mediaSocialAuthor;

}

@property (nonatomic,readonly) NSString * dsId; 
@property (nonatomic,readonly) NSString * entityIdentifier; 
@property (nonatomic,readonly) NSString * entityType; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * permissions; 
@property (nonatomic,readonly) NSDictionary * storePlatformData; 
-(NSString *)name;
-(NSString *)entityType;
-(id)initWithSKUIMediaSocialAuthor:(id)arg1 ;
-(NSArray *)permissions;
-(NSDictionary *)storePlatformData;
-(NSString *)dsId;
-(NSString *)entityIdentifier;
@end

