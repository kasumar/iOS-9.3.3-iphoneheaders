/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:21 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString;

@interface HSUserManagementUserCell : UITableViewCell {

	NSString* _displayName;
	NSString* _invitationStatusString;

}

@property (nonatomic,retain) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * invitationStatusString;              //@synthesize invitationStatusString=_invitationStatusString - In the implementation block
-(void)setInvitationStatusString:(NSString *)arg1 ;
-(NSString *)invitationStatusString;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
@end

