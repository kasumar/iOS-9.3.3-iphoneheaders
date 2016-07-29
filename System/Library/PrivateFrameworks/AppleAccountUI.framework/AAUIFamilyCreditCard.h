/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, UIImage;

@interface AAUIFamilyCreditCard : NSObject {

	NSString* _details;
	NSString* _footer;
	NSString* _providerDescription;
	NSString* _type;
	NSString* _usageNotice;
	NSURL* _imageURL;
	UIImage* _image;

}

@property (nonatomic,copy) NSString * details;                          //@synthesize details=_details - In the implementation block
@property (nonatomic,copy) NSString * footer;                           //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy) NSString * providerDescription;              //@synthesize providerDescription=_providerDescription - In the implementation block
@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * usageNotice;                      //@synthesize usageNotice=_usageNotice - In the implementation block
@property (nonatomic,copy) NSURL * imageURL;                            //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) UIImage * image;                           //@synthesize image=_image - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(UIImage *)image;
-(NSString *)details;
-(void)setDetails:(NSString *)arg1 ;
-(NSString *)providerDescription;
-(void)setProviderDescription:(NSString *)arg1 ;
-(NSString *)usageNotice;
-(void)setUsageNotice:(NSString *)arg1 ;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
@end

