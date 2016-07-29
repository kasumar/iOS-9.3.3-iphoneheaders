/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSMutableDictionary;

@interface _ICQAlertSpecification : NSObject {

	NSDictionary* _serverDict;
	BOOL _disableLockScreenAlert;
	NSString* _title;
	NSString* _message;
	NSString* _lockScreenTitle;
	NSString* _lockScreenMessage;
	long long _defaultButtonIndex;
	NSMutableDictionary* _linkForButtonIndex;

}

@property (nonatomic,retain) NSDictionary * serverDict; 
@property (nonatomic,retain) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                          //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * lockScreenTitle;                  //@synthesize lockScreenTitle=_lockScreenTitle - In the implementation block
@property (nonatomic,retain) NSString * lockScreenMessage;                //@synthesize lockScreenMessage=_lockScreenMessage - In the implementation block
@property (assign,nonatomic) BOOL disableLockScreenAlert;                 //@synthesize disableLockScreenAlert=_disableLockScreenAlert - In the implementation block
@property (assign,nonatomic) long long defaultButtonIndex;                //@synthesize defaultButtonIndex=_defaultButtonIndex - In the implementation block
@property (retain) NSMutableDictionary * linkForButtonIndex;              //@synthesize linkForButtonIndex=_linkForButtonIndex - In the implementation block
+(id)alertSpecificationSampleForLevel:(long long)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)message;
-(long long)defaultButtonIndex;
-(void)setMessage:(NSString *)arg1 ;
-(void)setDefaultButtonIndex:(long long)arg1 ;
-(void)setServerDict:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)linkForButtonIndex;
-(void)setLink:(id)arg1 forButtonIndex:(long long)arg2 ;
-(void)setLink:(id)arg1 forButtonIndex:(long long)arg2 defaultButton:(BOOL)arg3 ;
-(void)_setLinks:(id)arg1 defaultIndex:(unsigned long long)arg2 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(id)linkForButtonIndex:(long long)arg1 ;
-(NSDictionary *)serverDict;
-(NSString *)lockScreenTitle;
-(void)setLockScreenTitle:(NSString *)arg1 ;
-(NSString *)lockScreenMessage;
-(void)setLockScreenMessage:(NSString *)arg1 ;
-(BOOL)disableLockScreenAlert;
-(void)setDisableLockScreenAlert:(BOOL)arg1 ;
-(void)setLinkForButtonIndex:(NSMutableDictionary *)arg1 ;
@end

