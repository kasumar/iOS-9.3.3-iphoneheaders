/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPicker/WiFiPicker-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface WFWiFiSignalStrength : UIView {

	int _bars;
	float _rawStrength;
	BOOL _hilited;
	BOOL _selected;
	BOOL _secure;
	BOOL _requiresPassword;
	BOOL _joining;
	UIImageView* _leftView;
	UIImageView* _rightView;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
+(void)hideSpinner;
-(void)setSpinnerHilited:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)updateStrength:(id)arg1 ;
-(void)setJoining:(BOOL)arg1 ;
-(BOOL)joining;
-(void)setRequiresPassword:(BOOL)arg1 ;
-(void)hide;
-(void)dealloc;
-(void)setSecure:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)updateImage;
-(BOOL)requiresPassword;
-(BOOL)secure;
@end

