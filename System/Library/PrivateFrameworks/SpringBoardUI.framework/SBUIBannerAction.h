/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SBUIBannerAction : NSObject {

	/*^block*/id _actionBlock;
	NSString* _remoteViewControllerClassName;
	NSString* _remoteServiceBundleIdentifier;
	unsigned long long _behavior;
	unsigned long long _activationMode;
	NSString* _identifier;
	NSDictionary* _parameters;

}

@property (nonatomic,copy) id actionBlock;                                        //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,copy) NSString * remoteViewControllerClassName;              //@synthesize remoteViewControllerClassName=_remoteViewControllerClassName - In the implementation block
@property (nonatomic,copy) NSString * remoteServiceBundleIdentifier;              //@synthesize remoteServiceBundleIdentifier=_remoteServiceBundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long behavior;                         //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) unsigned long long activationMode;                 //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                             //@synthesize parameters=_parameters - In the implementation block
+(id)actionWithBlock:(/*^block*/id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned long long)behavior;
-(NSDictionary *)parameters;
-(unsigned long long)activationMode;
-(void)setBehavior:(unsigned long long)arg1 ;
-(void)setParameters:(NSDictionary *)arg1 ;
-(NSString *)remoteServiceBundleIdentifier;
-(NSString *)remoteViewControllerClassName;
-(void)setRemoteViewControllerClassName:(NSString *)arg1 ;
-(void)setRemoteServiceBundleIdentifier:(NSString *)arg1 ;
-(id)initWithActionBlock:(/*^block*/id)arg1 remoteViewControllerClassName:(id)arg2 remoteServiceBundleIdentifier:(id)arg3 actionIdentifier:(id)arg4 activationMode:(unsigned long long)arg5 behavior:(unsigned long long)arg6 parameters:(id)arg7 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end

