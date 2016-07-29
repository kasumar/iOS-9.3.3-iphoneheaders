/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/MNBannerItem.h>

@class NSString;

@interface MNTrafficAlertBannerItem : MNBannerItem {

	id _groupIdentifier;
	unsigned long long _alertType;
	NSString* _title;
	NSString* _subtitle;

}

@property (assign,nonatomic) unsigned long long alertType;              //@synthesize alertType=_alertType - In the implementation block
@property (nonatomic,copy,readonly) id groupIdentifier;                 //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                         //@synthesize subtitle=_subtitle - In the implementation block
-(void)updateFromGuidanceChange:(id)arg1 ;
-(BOOL)matchingGuidanceInfo:(id)arg1 ;
-(id)initWithTrafficIncidentAlertType:(unsigned long long)arg1 title:(id)arg2 subtitle:(id)arg3 groupIdentifier:(id)arg4 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(/*^block*/id)action;
-(NSString *)title;
-(unsigned long long)priority;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setAlertType:(unsigned long long)arg1 ;
-(unsigned long long)alertType;
-(id)groupIdentifier;
-(BOOL)isSticky;
-(BOOL)canShowInAssistant;
@end

