/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString, NSDictionary;

@interface FMAlert : NSObject <NSSecureCoding> {

	BOOL _showMsgInLockScreen;
	BOOL _dismissMsgOnUnlock;
	BOOL _dismissMsgOnLock;
	NSUUID* _alertId;
	unsigned long long _category;
	NSString* _msgTitle;
	NSString* _msgText;
	NSString* _defaultButtonTitle;
	NSString* _alternateButtonTitle;
	double _timeout;
	NSDictionary* _additionalSettings;
	/*^block*/id _defaultButtonAction;
	/*^block*/id _alternateButtonAction;

}

@property (nonatomic,retain) NSUUID * alertId;                               //@synthesize alertId=_alertId - In the implementation block
@property (assign,nonatomic) unsigned long long category;                    //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * msgTitle;                            //@synthesize msgTitle=_msgTitle - In the implementation block
@property (nonatomic,retain) NSString * msgText;                             //@synthesize msgText=_msgText - In the implementation block
@property (nonatomic,retain) NSString * defaultButtonTitle;                  //@synthesize defaultButtonTitle=_defaultButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * alternateButtonTitle;                //@synthesize alternateButtonTitle=_alternateButtonTitle - In the implementation block
@property (assign,nonatomic) double timeout;                                 //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) BOOL showMsgInLockScreen;                       //@synthesize showMsgInLockScreen=_showMsgInLockScreen - In the implementation block
@property (assign,nonatomic) BOOL dismissMsgOnUnlock;                        //@synthesize dismissMsgOnUnlock=_dismissMsgOnUnlock - In the implementation block
@property (assign,nonatomic) BOOL dismissMsgOnLock;                          //@synthesize dismissMsgOnLock=_dismissMsgOnLock - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalSettings;              //@synthesize additionalSettings=_additionalSettings - In the implementation block
@property (nonatomic,copy) id defaultButtonAction;                           //@synthesize defaultButtonAction=_defaultButtonAction - In the implementation block
@property (nonatomic,copy) id alternateButtonAction;                         //@synthesize alternateButtonAction=_alternateButtonAction - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setCategory:(unsigned long long)arg1 ;
-(unsigned long long)category;
-(void)setTimeout:(double)arg1 ;
-(void)setDefaultButtonTitle:(NSString *)arg1 ;
-(void)setAlertId:(NSUUID *)arg1 ;
-(void)setMsgTitle:(NSString *)arg1 ;
-(void)setMsgText:(NSString *)arg1 ;
-(void)setShowMsgInLockScreen:(BOOL)arg1 ;
-(void)setDismissMsgOnUnlock:(BOOL)arg1 ;
-(void)setDismissMsgOnLock:(BOOL)arg1 ;
-(NSUUID *)alertId;
-(void)setAdditionalSettings:(NSDictionary *)arg1 ;
-(void)setDefaultButtonAction:(id)arg1 ;
-(void)setAlternateButtonAction:(id)arg1 ;
-(double)timeout;
-(NSString *)defaultButtonTitle;
-(NSString *)msgText;
-(NSString *)msgTitle;
-(BOOL)showMsgInLockScreen;
-(BOOL)dismissMsgOnUnlock;
-(BOOL)dismissMsgOnLock;
-(NSDictionary *)additionalSettings;
-(id)defaultButtonAction;
-(id)alternateButtonAction;
-(NSString *)alternateButtonTitle;
-(void)setAlternateButtonTitle:(NSString *)arg1 ;
@end

