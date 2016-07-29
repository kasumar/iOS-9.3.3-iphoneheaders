/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, NSString, NSURL;

@interface SKUIOnboardingAffiliationItem : NSObject <NSCopying> {

	UIColor* _fillColor;
	NSString* _identifier;
	NSString* _imageName;
	NSString* _imageTreatment;
	NSURL* _imageURL;
	NSString* _title;
	long long _userAffinityCount;

}

@property (nonatomic,copy) UIColor * fillColor;                        //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * imageName;                       //@synthesize imageName=_imageName - In the implementation block
@property (nonatomic,copy) NSString * imageTreatment;                  //@synthesize imageTreatment=_imageTreatment - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                           //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long userAffinityCount;              //@synthesize userAffinityCount=_userAffinityCount - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(long long)userAffinityCount;
-(void)setUserAffinityCount:(long long)arg1 ;
-(void)setImageName:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSString *)imageTreatment;
-(void)setImageTreatment:(NSString *)arg1 ;
-(NSURL *)imageURL;
-(NSString *)imageName;
@end

