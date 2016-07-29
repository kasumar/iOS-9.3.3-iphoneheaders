/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSMutableSet;

@interface NNMKSyncedMessage : NSObject {

	BOOL _usedProtectedChannelForMessageSync;
	BOOL _usedNotificationPriorityForMessageSync;
	BOOL _contentSyncedUsingNotificationPriority;
	BOOL _contentSyncedBecauseUserRequested;
	BOOL _contentSynced;
	BOOL _contentRequestedByUser;
	BOOL _resendRequested;
	NSString* _messageId;
	unsigned long long _status;
	unsigned long long _statusVersion;
	NSDate* _dateReceived;
	NSMutableSet* _attachmentsContentIdsNotYetSynced;
	NSString* _conversationId;
	unsigned long long _resendInterval;
	unsigned long long _contentResendInterval;

}

@property (nonatomic,retain) NSString * messageId;                                          //@synthesize messageId=_messageId - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long statusVersion;                              //@synthesize statusVersion=_statusVersion - In the implementation block
@property (nonatomic,retain) NSDate * dateReceived;                                         //@synthesize dateReceived=_dateReceived - In the implementation block
@property (assign,nonatomic) BOOL usedProtectedChannelForMessageSync;                       //@synthesize usedProtectedChannelForMessageSync=_usedProtectedChannelForMessageSync - In the implementation block
@property (assign,nonatomic) BOOL usedNotificationPriorityForMessageSync;                   //@synthesize usedNotificationPriorityForMessageSync=_usedNotificationPriorityForMessageSync - In the implementation block
@property (assign,nonatomic) BOOL contentSyncedUsingNotificationPriority;                   //@synthesize contentSyncedUsingNotificationPriority=_contentSyncedUsingNotificationPriority - In the implementation block
@property (assign,nonatomic) BOOL contentSyncedBecauseUserRequested;                        //@synthesize contentSyncedBecauseUserRequested=_contentSyncedBecauseUserRequested - In the implementation block
@property (assign,nonatomic) BOOL contentSynced;                                            //@synthesize contentSynced=_contentSynced - In the implementation block
@property (assign,nonatomic) BOOL contentRequestedByUser;                                   //@synthesize contentRequestedByUser=_contentRequestedByUser - In the implementation block
@property (nonatomic,retain) NSMutableSet * attachmentsContentIdsNotYetSynced;              //@synthesize attachmentsContentIdsNotYetSynced=_attachmentsContentIdsNotYetSynced - In the implementation block
@property (nonatomic,retain) NSString * conversationId;                                     //@synthesize conversationId=_conversationId - In the implementation block
@property (assign,nonatomic) BOOL resendRequested;                                          //@synthesize resendRequested=_resendRequested - In the implementation block
@property (assign,nonatomic) unsigned long long resendInterval;                             //@synthesize resendInterval=_resendInterval - In the implementation block
@property (assign,nonatomic) unsigned long long contentResendInterval;                      //@synthesize contentResendInterval=_contentResendInterval - In the implementation block
-(id)init;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(NSDate *)dateReceived;
-(NSString *)conversationId;
-(void)setConversationId:(NSString *)arg1 ;
-(void)setDateReceived:(NSDate *)arg1 ;
-(NSString *)messageId;
-(void)setMessageId:(NSString *)arg1 ;
-(void)setStatusVersion:(unsigned long long)arg1 ;
-(unsigned long long)statusVersion;
-(BOOL)usedProtectedChannelForMessageSync;
-(BOOL)usedNotificationPriorityForMessageSync;
-(BOOL)contentSynced;
-(BOOL)contentSyncedUsingNotificationPriority;
-(BOOL)contentSyncedBecauseUserRequested;
-(BOOL)contentRequestedByUser;
-(BOOL)resendRequested;
-(unsigned long long)resendInterval;
-(unsigned long long)contentResendInterval;
-(NSMutableSet *)attachmentsContentIdsNotYetSynced;
-(void)setUsedProtectedChannelForMessageSync:(BOOL)arg1 ;
-(void)setUsedNotificationPriorityForMessageSync:(BOOL)arg1 ;
-(void)setContentSynced:(BOOL)arg1 ;
-(void)setContentSyncedUsingNotificationPriority:(BOOL)arg1 ;
-(void)setContentSyncedBecauseUserRequested:(BOOL)arg1 ;
-(void)setContentRequestedByUser:(BOOL)arg1 ;
-(void)setAttachmentsContentIdsNotYetSynced:(NSMutableSet *)arg1 ;
-(void)setResendRequested:(BOOL)arg1 ;
-(void)setResendInterval:(unsigned long long)arg1 ;
-(void)setContentResendInterval:(unsigned long long)arg1 ;
-(id)initWithMessage:(id)arg1 ;
@end

