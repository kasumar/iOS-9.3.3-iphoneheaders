/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class NSString;

@interface SBControlCenterButtonSettings : _UISettings {

	BOOL _enabled;
	NSString* _displayName;
	NSString* _identifier;

}

@property (assign,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
+(id)createWithSettingClass:(Class)arg1 ;
+(id)settingsControllerModule;
-(BOOL)enabled;
-(NSString *)identifier;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDefaultValues;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

