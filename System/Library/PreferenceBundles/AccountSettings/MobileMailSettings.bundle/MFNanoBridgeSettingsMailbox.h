/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MFNanoBridgeSettingsMailbox : NSObject <NSSecureCoding>
+(BOOL)supportsSecureCoding;
+(id)defaultSelectedMailbox;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isValid;
-(unsigned long long)level;
-(id)icon;
-(id)displayName;
-(void)configureCell:(id)arg1 ;
@end

