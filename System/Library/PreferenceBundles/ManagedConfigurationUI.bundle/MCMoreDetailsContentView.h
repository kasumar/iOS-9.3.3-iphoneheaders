/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:22 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface MCMoreDetailsContentView : UIView {

	UILabel* _title;
	UILabel* _subtitle1;
	UILabel* _subtitle2;

}
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)setPayload:(id)arg1 ;
-(id)_textForLabel:(id)arg1 value:(id)arg2 ;
-(void)setSubtitle1Text:(id)arg1 ;
-(void)setSubtitle2Text:(id)arg1 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
@end

