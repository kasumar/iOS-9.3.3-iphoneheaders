/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBApplicationIcon.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>

@class NSString;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBDateTimeOverrideObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)countriesRequiringBlackDayOfWeek;
-(id)generateIconImage:(int)arg1 ;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)_startListeningForSignificantTimeChanges;
-(void)_stopListeningForSignificantTimeChanges;
-(void)_drawIconIntoCurrentContextWithImageSize:(CGSize)arg1 iconBase:(id)arg2 ;
-(id)_compositedIconImageForFormat:(int)arg1 withBaseImageProvider:(/*^block*/id)arg2 ;
-(BOOL)isBlackDayOfWeekRequiredForLocale:(id)arg1 ;
-(id)numberFont;
-(id)colorForDayOfWeek;
-(void)dealloc;
-(void)localeChanged;
-(id)initWithApplication:(id)arg1 ;
@end

