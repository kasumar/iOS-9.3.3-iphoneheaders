/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class LocationUsageMixin;

@interface LocationServicesSubDirectoryCell : PSTableCell {

	LocationUsageMixin* _location;

}

@property (nonatomic,readonly) LocationUsageMixin * location;              //@synthesize location=_location - In the implementation block
-(void)layoutSubviews;
-(LocationUsageMixin *)location;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(BOOL)canReload;
@end

