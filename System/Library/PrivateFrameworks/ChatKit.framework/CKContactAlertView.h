/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface CKContactAlertView : UIView {

	NSString* _contactDescription;
	UIImage* _image;
	UIImageView* _contactImageView;
	UILabel* _contactLabel;

}

@property (nonatomic,retain) NSString * contactDescription;               //@synthesize contactDescription=_contactDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
@property (nonatomic,retain) UILabel * contactLabel;                      //@synthesize contactLabel=_contactLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIImage *)image;
-(void)setContactDescription:(NSString *)arg1 ;
-(UIImageView *)contactImageView;
-(void)setContactImageView:(UIImageView *)arg1 ;
-(NSString *)contactDescription;
-(UILabel *)contactLabel;
-(void)setContactLabel:(UILabel *)arg1 ;
@end

