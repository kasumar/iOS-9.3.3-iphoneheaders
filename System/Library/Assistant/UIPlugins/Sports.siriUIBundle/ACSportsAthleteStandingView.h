/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsStandingColumnView.h>

@class ACSportsLoadingImageView, SiriUIContentLabel, SASportsAthlete;

@interface ACSportsAthleteStandingView : ACSportsStandingColumnView {

	ACSportsLoadingImageView* _headShotView;
	SiriUIContentLabel* _namePlusTeamLabel;

}

@property (nonatomic,retain) SASportsAthlete * entity; 
-(void)statLabelMinXDidChange;
-(id)textForSnippetColumn:(id)arg1 ;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(BOOL)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)contentHeight;
@end

