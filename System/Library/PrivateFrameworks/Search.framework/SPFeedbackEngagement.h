/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPFeedback.h>

@class NSString, NSURL;

@interface SPFeedbackEngagement : SPFeedback {

	BOOL _userReturnedToResultsList;
	BOOL _engagementOnCard;
	NSString* _cardType;
	NSURL* _action_destination;
	NSString* _lastSearchQuery;
	long long _displayPosition;
	double _resultScore;
	double _sectionScore;
	NSString* _actionTarget;

}

@property (assign,nonatomic) BOOL userReturnedToResultsList;              //@synthesize userReturnedToResultsList=_userReturnedToResultsList - In the implementation block
@property (assign,nonatomic) BOOL engagementOnCard;                       //@synthesize engagementOnCard=_engagementOnCard - In the implementation block
@property (nonatomic,retain) NSString * cardType;                         //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) NSURL * action_destination;                  //@synthesize action_destination=_action_destination - In the implementation block
@property (nonatomic,retain) NSString * lastSearchQuery;                  //@synthesize lastSearchQuery=_lastSearchQuery - In the implementation block
@property (assign) long long displayPosition;                             //@synthesize displayPosition=_displayPosition - In the implementation block
@property (assign) double resultScore;                                    //@synthesize resultScore=_resultScore - In the implementation block
@property (assign) double sectionScore;                                   //@synthesize sectionScore=_sectionScore - In the implementation block
@property (nonatomic,retain) NSString * actionTarget;                     //@synthesize actionTarget=_actionTarget - In the implementation block
-(id)parsecFeedbackFromSession:(id)arg1 class:(Class)arg2 ;
-(id)parsecFeedbackFromSession:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)lastSearchQuery;
-(NSString *)cardType;
-(NSURL *)action_destination;
-(BOOL)userReturnedToResultsList;
-(BOOL)engagementOnCard;
-(long long)displayPosition;
-(void)setEngagementOnCard:(BOOL)arg1 ;
-(void)setCardType:(NSString *)arg1 ;
-(void)setAction_destination:(NSURL *)arg1 ;
-(NSString *)actionTarget;
-(void)setActionTarget:(NSString *)arg1 ;
-(void)setUserReturnedToResultsList:(BOOL)arg1 ;
-(double)sectionScore;
-(void)setLastSearchQuery:(NSString *)arg1 ;
-(void)setDisplayPosition:(long long)arg1 ;
-(double)resultScore;
-(void)setResultScore:(double)arg1 ;
-(void)setSectionScore:(double)arg1 ;
@end

