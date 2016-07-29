/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBCarDisplaySettings : _UISettings {

	BOOL _animateLockOutModeChanges;
	long long _lockOutMode;

}

@property (assign) BOOL animateLockOutModeChanges;              //@synthesize animateLockOutModeChanges=_animateLockOutModeChanges - In the implementation block
@property (assign) long long lockOutMode;                       //@synthesize lockOutMode=_lockOutMode - In the implementation block
+(id)settingsControllerModule;
-(BOOL)animateLockOutModeChanges;
-(long long)lockOutMode;
-(void)setLockOutMode:(long long)arg1 ;
-(void)setAnimateLockOutModeChanges:(BOOL)arg1 ;
-(void)setDefaultValues;
@end

