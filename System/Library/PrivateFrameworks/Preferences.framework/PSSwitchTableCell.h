/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:37 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSControlTableCell.h>

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {

	UIActivityIndicatorView* _activityIndicator;

}

@property (assign,nonatomic) BOOL loading; 
-(void)layoutSubviews;
-(void)setValue:(id)arg1 ;
-(void)prepareForReuse;
-(void)reloadWithSpecifier:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCellEnabled:(BOOL)arg1 ;
-(id)newControl;
-(id)controlValue;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(BOOL)canReload;
@end

