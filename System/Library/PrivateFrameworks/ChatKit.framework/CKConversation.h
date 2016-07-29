/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSArray, NSString, IMChat, NSAttributedString, CKEntity, CKComposition, IMService;

@interface CKConversation : NSObject {

	NSArray* _recipients;
	NSString* _name;
	IMChat* _chat;
	unsigned _limitToLoad;
	struct {
		unsigned ignoringTypingUpdates : 1;
	}  _conversationFlags;
	BOOL _needsReload;
	NSArray* _pendingHandles;
	NSAttributedString* _groupName;

}

@property (nonatomic,retain) IMChat * chat;                                                          //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain,readonly) NSArray * frequentReplies; 
@property (nonatomic,retain) NSArray * recipients;                                                   //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,retain,readonly) CKEntity * recipient; 
@property (nonatomic,copy,readonly) NSArray * recipientStrings; 
@property (nonatomic,readonly) unsigned long long recipientCount; 
@property (nonatomic,readonly) BOOL isToEmailAddress; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (assign,nonatomic) NSString * displayName; 
@property (nonatomic,retain,readonly) NSAttributedString * groupName;                                //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,retain,readonly) NSString * serviceDisplayName; 
@property (nonatomic,readonly) char buttonColor; 
@property (nonatomic,retain,readonly) NSString * previewText; 
@property (nonatomic,readonly) BOOL isPreviewTextForAttachment; 
@property (nonatomic,retain) CKComposition * unsentComposition; 
@property (nonatomic,readonly) unsigned long long unreadCount; 
@property (nonatomic,readonly) BOOL hasUnreadMessages; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) BOOL needsReload;                                                     //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,retain,readonly) NSString * groupID; 
@property (nonatomic,retain,readonly) NSString * deviceIndependentID; 
@property (nonatomic,retain,readonly) IMService * sendingService; 
@property (assign,nonatomic) BOOL forceMMS; 
@property (getter=isGroupConversation,nonatomic,readonly) BOOL groupConversation; 
@property (nonatomic,readonly) BOOL canLeave; 
@property (getter=hasLeft,nonatomic,readonly) BOOL left; 
@property (nonatomic,readonly) BOOL supportsMutatingGroupMembers; 
@property (getter=hasLeftGroupChat,nonatomic,readonly) BOOL leftGroupChat; 
@property (assign,nonatomic) unsigned limitToLoad;                                                   //@synthesize limitToLoad=_limitToLoad - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCharacterCount; 
@property (assign,nonatomic) BOOL localUserIsTyping; 
@property (assign,nonatomic) BOOL localUserIsRecording; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (nonatomic,copy,readonly) NSArray * pendingEntities; 
@property (nonatomic,copy) NSArray * pendingHandles;                                                 //@synthesize pendingHandles=_pendingHandles - In the implementation block
@property (nonatomic,retain,readonly) NSArray * handles; 
@property (nonatomic,readonly) unsigned long long disclosureAtomStyle; 
@property (assign,getter=isIgnoringTypingUpdates,nonatomic) BOOL ignoringTypingUpdates; 
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 ;
+(double)_sms_maxTrimDurationForMediaType:(int)arg1 ;
+(BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
+(BOOL)_sms_canSendComposition:(id)arg1 error:(id*)arg2 ;
+(long long)_sms_maxAttachmentCount;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2 ;
+(BOOL)_sms_mediaObjectPassesRestriction:(id)arg1 ;
+(BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1 ;
+(id)_sms_localizedErrorForReason:(long long)arg1 ;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 ;
+(double)_iMessage_maxTrimDurationForMediaType:(int)arg1 ;
+(BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
+(BOOL)_iMessage_canSendComposition:(id)arg1 error:(id*)arg2 ;
+(long long)_iMessage_maxAttachmentCount;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2 ;
+(id)_iMessage_localizedErrorForReason:(long long)arg1 ;
+(unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1 ;
+(id)newPendingConversation;
-(BOOL)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1 ;
-(BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1 ;
-(BOOL)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)date;
-(NSAttributedString *)groupName;
-(id)shortDescription;
-(NSArray *)handles;
-(NSString *)displayName;
-(id)uniqueIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)hasDisplayName;
-(BOOL)isPlaceholder;
-(char)buttonColor;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(BOOL)isMuted;
-(NSString *)groupID;
-(CKEntity *)recipient;
-(IMChat *)chat;
-(BOOL)isGroupConversation;
-(BOOL)supportsMutatingGroupMembers;
-(BOOL)canLeave;
-(BOOL)hasLeft;
-(IMService *)sendingService;
-(id)copyForPendingConversation;
-(BOOL)canInsertMoreRecipients;
-(BOOL)forceMMS;
-(void)setForceMMS:(BOOL)arg1 ;
-(BOOL)shouldShowCharacterCount;
-(BOOL)isPending;
-(char)sendButtonColor;
-(unsigned long long)recipientCount;
-(BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
-(void)unmute;
-(void)setMutedUntilDate:(id)arg1 ;
-(void)removeRecipientHandles:(id)arg1 ;
-(void)addRecipientHandles:(id)arg1 ;
-(CKComposition *)unsentComposition;
-(unsigned long long)unreadCount;
-(void)setUnsentComposition:(CKComposition *)arg1 ;
-(NSString *)deviceIndependentID;
-(void)markAllMessagesAsRead;
-(void)setNeedsReload;
-(void)loadAllMessages;
-(void)refreshServiceForSending;
-(void)setPendingComposeRecipients:(id)arg1 ;
-(BOOL)hasUnreadMessages;
-(id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2 ;
-(void)sendMessage:(id)arg1 newComposition:(BOOL)arg2 ;
-(void)setIgnoringTypingUpdates:(BOOL)arg1 ;
-(void)deleteAllMessages;
-(id)messageWithComposition:(id)arg1 ;
-(double)maxTrimDurationForMediaType:(int)arg1 ;
-(void)resetCaches;
-(NSArray *)pendingHandles;
-(NSArray *)pendingEntities;
-(BOOL)canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)canSendComposition:(id)arg1 error:(id*)arg2 ;
-(void)setLocalUserIsRecording:(BOOL)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(void)acceptTransfer:(id)arg1 ;
-(BOOL)hasLeftGroupChat;
-(id)initWithChat:(id)arg1 ;
-(void)setPendingHandles:(NSArray *)arg1 ;
-(long long)compareBySequenceNumberAndDateDescending:(id)arg1 ;
-(void)deleteAllMessagesAndRemoveGroup;
-(NSString *)previewText;
-(id)orderedContactsForAvatarView;
-(unsigned)limitToLoad;
-(void)setLoadedMessageCount:(unsigned long long)arg1 ;
-(void)setChat:(IMChat *)arg1 ;
-(void)_handleChatParticipantsDidChange:(id)arg1 ;
-(void)_handleChatJoinStateDidChange:(id)arg1 ;
-(void)_handlePreferredServiceChangedNotification:(id)arg1 ;
-(void)resetNameCaches;
-(BOOL)isDowngraded;
-(long long)maximumRecipientsForSendingService;
-(void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_clearTypingIndicatorsIfNecessary;
-(void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1 ;
-(NSArray *)frequentReplies;
-(void)setLimitToLoad:(unsigned)arg1 ;
-(void)reloadIfNeeded;
-(BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2 ;
-(void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3 ;
-(BOOL)_chatSupportsTypingIndicators;
-(BOOL)localUserIsTyping;
-(BOOL)localUserIsRecording;
-(NSArray *)recipientStrings;
-(id)_nameForHandle:(id)arg1 ;
-(id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3 ;
-(id)_headerTitleForService:(id)arg1 ;
-(BOOL)isIgnoringTypingUpdates;
-(BOOL)_handleIsForThisConversation:(id)arg1 ;
-(BOOL)noAvailableServices;
-(BOOL)isToEmailAddress;
-(void)loadFrequentReplies;
-(void)loadMoreMessages;
-(BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2 ;
-(void)updateUserActivityWithComposition:(id)arg1 ;
-(unsigned long long)disclosureAtomStyle;
-(BOOL)isPreviewTextForAttachment;
-(char)outgoingBubbleColor;
-(NSString *)serviceDisplayName;
-(BOOL)needsReload;
@end

