/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL, STPerson, NSArray;

@interface STEmailMessage : STSiriModelObject {

	NSString* _messageBody;
	NSURL* _messageIdentifier;
	STPerson* _sender;
	NSString* _subject;
	long long _type;
	NSArray* _toRecipients;
	NSArray* _ccRecipients;
	NSArray* _bccRecipients;
	NSArray* _receivingAddresses;

}

@property (nonatomic,copy) NSString * messageBody;                      //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSURL * messageIdentifier;                 //@synthesize messageIdentifier=_messageIdentifier - In the implementation block
@property (nonatomic,retain) STPerson * sender;                         //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSString * subject;                          //@synthesize subject=_subject - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * toRecipients;                    //@synthesize toRecipients=_toRecipients - In the implementation block
@property (nonatomic,retain) NSArray * ccRecipients;                    //@synthesize ccRecipients=_ccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * bccRecipients;                   //@synthesize bccRecipients=_bccRecipients - In the implementation block
@property (nonatomic,retain) NSArray * receivingAddresses;              //@synthesize receivingAddresses=_receivingAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(STPerson *)sender;
-(void)setSender:(STPerson *)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSArray *)receivingAddresses;
-(void)setReceivingAddresses:(NSArray *)arg1 ;
-(id)_aceContextObjectValue;
-(NSArray *)toRecipients;
-(NSArray *)ccRecipients;
-(void)setCcRecipients:(NSArray *)arg1 ;
-(void)setBccRecipients:(NSArray *)arg1 ;
-(NSArray *)bccRecipients;
-(NSString *)messageBody;
-(void)setMessageBody:(NSString *)arg1 ;
-(id)_personAttributesForRecipients:(id)arg1 ;
-(void)setToRecipients:(NSArray *)arg1 ;
-(NSURL *)messageIdentifier;
-(void)setMessageIdentifier:(NSURL *)arg1 ;
@end

