/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/WAAnswer.siriUIBundle/WAAnswer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WAAnswer/WAAnswer-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, SiriUIKeyline, NSString;

@interface WATextHeaderView : SiriUIContentCollectionViewCell {

	UILabel* _headerLabel;
	SiriUIKeyline* _keyline;

}

@property (nonatomic,retain) NSString * text; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)_headerHeight;
@end

