/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSPersonNameComponents : NSObject <NSCopying, NSSecureCoding> {

	id _private;

}

@property (copy) NSString * namePrefix; 
@property (copy) NSString * givenName; 
@property (copy) NSString * middleName; 
@property (copy) NSString * familyName; 
@property (copy) NSString * nameSuffix; 
@property (copy) NSString * nickname; 
@property (copy) NSPersonNameComponents * phoneticRepresentation; 
+(id)componentsForContact:(id)arg1 ;
+(id)keyPathMapping;
+(id)_allProperties;
+(id)__componentsRequiredForScriptDetectionWithPhoneticDesired:(BOOL)arg1 ;
+(id)_allComponents;
+(BOOL)supportsSecureCoding;
-(id)_scriptDeterminingStringRepresentationWithPhoneticDesired:(BOOL)arg1 ;
-(BOOL)_isEmpty;
-(NSString *)givenName;
-(void)setFamilyName:(NSString *)arg1 ;
-(NSString *)middleName;
-(void)setMiddleName:(NSString *)arg1 ;
-(NSPersonNameComponents *)phoneticRepresentation;
-(void)setPhoneticRepresentation:(NSPersonNameComponents *)arg1 ;
-(BOOL)isEqualToComponents:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)familyName;
-(void)setNamePrefix:(NSString *)arg1 ;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)namePrefix;
-(NSString *)nameSuffix;
-(void)setGivenName:(NSString *)arg1 ;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)finalize;
@end
