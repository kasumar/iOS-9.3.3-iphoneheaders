/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABCountryInfo : NSObject {

	NSString* _countryCode;
	NSString* _countryName;
	NSString* _phoneticCountryName;

}

@property (nonatomic,copy) NSString * countryCode;                      //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * countryName;                      //@synthesize countryName=_countryName - In the implementation block
@property (nonatomic,copy) NSString * phoneticCountryName;              //@synthesize phoneticCountryName=_phoneticCountryName - In the implementation block
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)phoneticCountryName;
-(void)setPhoneticCountryName:(NSString *)arg1 ;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
@end

