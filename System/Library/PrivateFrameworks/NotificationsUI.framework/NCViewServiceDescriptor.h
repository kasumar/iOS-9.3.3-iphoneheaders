/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:14 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotificationsUI/NotificationsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NCViewServiceDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSString* _viewControllerClassName;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * viewControllerClassName;              //@synthesize viewControllerClassName=_viewControllerClassName - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2 ;
-(NSString *)viewControllerClassName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)bundleIdentifier;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

