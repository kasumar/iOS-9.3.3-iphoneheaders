/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBCCSettingModule.h>

@interface SBCCMuteSetting : SBCCSettingModule
+(BOOL)isSupported:(int)arg1 ;
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(void)_tearDown;
-(BOOL)isRestricted;
@end

