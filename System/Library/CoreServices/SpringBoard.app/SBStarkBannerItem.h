/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUIBannerItem.h>

@protocol SBStarkSessionConfiguring;
@class NSHashTable, NSMutableSet, NSString, UIImage, NSDate, NSArray;

@interface SBStarkBannerItem : SBUIBannerItem {

	id<SBStarkSessionConfiguring> _configuration;
	NSHashTable* _observers;
	NSMutableSet* _displayReasons;

}

@property (nonatomic,readonly) id<SBStarkSessionConfiguring> configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subTitle; 
@property (nonatomic,copy,readonly) NSString * message; 
@property (nonatomic,readonly) UIImage * categoryImage; 
@property (nonatomic,readonly) long long defaultActionType; 
@property (nonatomic,readonly) long long effectiveDefaultActionType; 
@property (nonatomic,readonly) NSDate * sourceDate; 
@property (nonatomic,copy,readonly) NSArray * subActionLabels; 
-(NSDate *)sourceDate;
-(BOOL)isStarkBannerItem;
-(void)_callOrFaceTimeStateChanged;
-(long long)defaultActionType;
-(BOOL)_inCallOrFaceTime;
-(void)reloadDisplayProperties;
-(UIImage *)categoryImage;
-(long long)effectiveDefaultActionType;
-(/*^block*/id)ignoreAction;
-(BOOL)matchesContext:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(NSString *)title;
-(void)removeObserver:(id)arg1 ;
-(NSString *)message;
-(id<SBStarkSessionConfiguring>)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(BOOL)shouldShowModalSubActions;
-(NSArray *)subActionLabels;
-(NSString *)subTitle;
@end

