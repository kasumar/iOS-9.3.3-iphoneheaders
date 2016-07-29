/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@class NSString, NSError, ADBannerView;

@interface SXAdOpportunityEvent : SXAnalyticsEvent {

	BOOL _expanded;
	BOOL _shown;
	int _opportunityError;
	NSString* _opportunityIdentifier;
	double _positionInArticle;
	NSString* _componentIdentifier;
	NSError* _error;
	ADBannerView* _bannerView;

}

@property (nonatomic,retain) NSString * opportunityIdentifier;              //@synthesize opportunityIdentifier=_opportunityIdentifier - In the implementation block
@property (assign,nonatomic) double positionInArticle;                      //@synthesize positionInArticle=_positionInArticle - In the implementation block
@property (nonatomic,retain) NSString * componentIdentifier;                //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (assign,nonatomic) int opportunityError;                          //@synthesize opportunityError=_opportunityError - In the implementation block
@property (nonatomic,retain) NSError * error;                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) ADBannerView * bannerView;                     //@synthesize bannerView=_bannerView - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                 //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) BOOL shown;                                    //@synthesize shown=_shown - In the implementation block
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(NSString *)componentIdentifier;
-(void)setPositionInArticle:(double)arg1 ;
-(void)setOpportunityError:(int)arg1 ;
-(int)opportunityError;
-(void)setOpportunityIdentifier:(NSString *)arg1 ;
-(void)setShown:(BOOL)arg1 ;
-(double)positionInArticle;
-(NSString *)opportunityIdentifier;
-(BOOL)shown;
-(id)description;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)setBannerView:(ADBannerView *)arg1 ;
-(ADBannerView *)bannerView;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
@end

