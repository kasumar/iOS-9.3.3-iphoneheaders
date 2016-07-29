/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface RUINavBarSpinnerManager : NSObject {

	NSMutableDictionary* _savedRecords;
	long long _activityIndicatorViewStyle;

}

@property (assign,nonatomic) long long activityIndicatorViewStyle;              //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
+(id)sharedSpinnerManager;
-(id)init;
-(long long)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(long long)arg1 ;
-(void)startAnimatingInNavItem:(id)arg1 forIdentifier:(id)arg2 ;
-(void)stopAnimatingForIdentifier:(id)arg1 ;
-(void)startAnimatingInNavItem:(id)arg1 title:(id)arg2 forIdentifier:(id)arg3 hideBackButton:(BOOL)arg4 ;
@end

