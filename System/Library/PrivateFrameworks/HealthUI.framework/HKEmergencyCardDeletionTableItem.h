/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKEmergencyCardTableItem.h>

@protocol HKEmergencyCardDeletionDelegate;
@class UITableViewCell;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem {

	UITableViewCell* _cell;
	id<HKEmergencyCardDeletionDelegate> _deletionDelegate;

}

@property (assign,nonatomic,__weak) id<HKEmergencyCardDeletionDelegate> deletionDelegate;              //@synthesize deletionDelegate=_deletionDelegate - In the implementation block
-(id)title;
-(id)initInEditMode:(BOOL)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2 ;
-(BOOL)shouldHighlightRowAtIndex:(long long)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2 ;
-(void)setDeletionDelegate:(id<HKEmergencyCardDeletionDelegate>)arg1 ;
-(id<HKEmergencyCardDeletionDelegate>)deletionDelegate;
@end

