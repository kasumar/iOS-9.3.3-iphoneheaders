/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <MIME/MFMessageStore.h>

@class MFMailboxUid, MailAccount, MFActivityMonitor;

@interface MFMailMessageStore : MFMessageStore {

	unsigned long long _state;
	struct {
		unsigned isReadOnly : 1;
		unsigned hasUnsavedChangesToMessageData : 1;
		unsigned haveOpenLockFile : 1;
		unsigned compacting : 1;
		unsigned cancelInvalidation : 1;
		unsigned forceInvalidation : 1;
		unsigned isWritingChangesToDisk : 1;
		unsigned isTryingToClose : 1;
		unsigned compactOnClose : 1;
		unsigned reserved : 23;
	}  _flags;
	MFMailboxUid* _mailboxUid;
	MailAccount* _account;
	unsigned long long _deletedMessagesSize;
	unsigned long long _deletedMessageCount;
	unsigned long long _unreadMessageCount;
	unsigned long long _generationNumber;
	unsigned long long _lastFetchCount;
	MFActivityMonitor* _openMonitor;

}
+(BOOL)createEmptyStoreForPath:(id)arg1 ;
+(BOOL)createEmptyStoreIfNeededForPath:(id)arg1 ;
+(BOOL)storeAtPathIsWritable:(id)arg1 ;
+(Class)classForMimePart;
+(id)copyMessageWithSelection:(id)arg1 toMailbox:(id)arg2 markAsRead:(BOOL)arg3 deleteOriginals:(BOOL)arg4 isDeletion:(BOOL)arg5 ;
+(Class)headersClass;
-(void)dealloc;
-(id)description;
-(void)close;
-(id)displayName;
-(id)status;
-(void)setLibrary:(id)arg1 ;
-(BOOL)isReadOnly;
-(void)openSynchronously;
-(void)updateUserInfoToLatestValues;
-(void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(id)mailboxUid;
-(unsigned long long)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)serverMessageCount;
-(unsigned long long)allNonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(BOOL)hasMoreFetchableMessages;
-(unsigned long long)fetchWindow;
-(id)copyOfAllMessagesWithOptions:(unsigned)arg1 ;
-(id)copyOfAllMessages;
-(id)copyMessagesMatchingText:(id)arg1 options:(unsigned)arg2 ;
-(id)_defaultRouterDestination;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlag:(id)arg1 state:(BOOL)arg2 forMessages:(id)arg3 ;
-(unsigned long long)appendMessageSelections:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessageSelection:(id)arg2 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 ;
-(id)messageForMessageID:(id)arg1 options:(unsigned)arg2 ;
-(id)lastViewedMessageDate;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(BOOL)_updateFlagForMessage:(id)arg1 key:(id)arg2 value:(BOOL)arg3 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(long long)fetchNumMessages:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(long long)fetchMobileSynchronously:(unsigned long long)arg1 preservingUID:(id)arg2 options:(unsigned long long)arg3 ;
-(void)messageFlagsDidChange:(id)arg1 flags:(id)arg2 ;
-(void)_flushAllMessageData;
-(BOOL)supportsArchiving;
-(id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3 ;
-(void)updateBodyFlagsForMessage:(id)arg1 body:(id)arg2 ;
-(void)_setFlagsForMessages:(id)arg1 ;
-(BOOL)_shouldChangeComponentMessageFlagsForMessage:(id)arg1 ;
-(BOOL)_shouldChangeComponentMessageFlags;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)openAsynchronously;
-(void)didOpen;
-(void)cancelOpen;
-(void)writeUpdatedMessageDataToDisk;
-(id)storePathRelativeToAccount;
-(BOOL)isDrafts;
-(void)allMessageFlagsDidChange:(id)arg1 ;
-(void)structureDidChange;
-(void)messagesWereAdded:(id)arg1 ;
-(void)messagesWereCompacted:(id)arg1 ;
-(void)messagesWillBeCompacted:(id)arg1 ;
-(void)deletedCount:(unsigned long long*)arg1 andSize:(unsigned long long*)arg2 ;
-(unsigned long long)serverUnreadCount;
-(BOOL)shouldGrowFetchWindow;
-(void)invalidateFetchWindow;
-(unsigned long long)growFetchWindow;
-(void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2 ;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(BOOL)hasMessageForAccount:(id)arg1 ;
-(unsigned long long)indexOfMessage:(id)arg1 ;
-(id)copyOfMessagesInRange:(NSRange)arg1 ;
-(id)mutableCopyOfAllMessages;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)arg1 limit:(unsigned)arg2 ;
-(id)copyMessagesMatchingText:(id)arg1 ;
-(id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(BOOL)canFetchSearchResults;
-(long long)fetchMessagesMatchingCriterion:(id)arg1 limit:(unsigned)arg2 ;
-(id)remoteIDsMatchingCriterion:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)remoteIDsMatchingSearchText:(id)arg1 limit:(unsigned)arg2 error:(id*)arg3 ;
-(id)remoteIDsFromUniqueRemoteIDs:(id)arg1 ;
-(BOOL)canFetchMessageIDs;
-(long long)fetchMessagesWithMessageIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(long long)fetchMessagesWithRemoteIDs:(id)arg1 andSetFlags:(unsigned long long)arg2 ;
-(id)finishRoutingMessages:(id)arg1 routed:(id)arg2 ;
-(BOOL)canCompact;
-(void)doCompact;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(void)messagesWereDeleted:(id)arg1 ;
-(BOOL)allowsAppend;
-(id)messageForRemoteID:(id)arg1 ;
-(id)lastViewedMessageWithOptions:(unsigned)arg1 ;
-(id)uniqueRemoteIDsForMessages:(id)arg1 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(BOOL)hasCachedDataForMimePart:(id)arg1 ;
-(id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)willSetFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlagsCancelled:(id)arg1 forMessages:(id)arg2 ;
-(void)setFlagForAllMessages:(id)arg1 state:(BOOL)arg2 ;
-(long long)fetchMobileSynchronously:(unsigned long long)arg1 ;
-(BOOL)setPreferredEncoding:(unsigned)arg1 forMessage:(id)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg1 ;
-(id)loadMeetingExternalIDForMessage:(id)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg1 ;
-(id)loadMeetingMetadataForMessage:(id)arg1 ;
-(BOOL)shouldSetSummaryForMessage:(id)arg1 ;
-(BOOL)canDeleteMessage:(id)arg1 ;
-(BOOL)shouldDeleteInPlace;
-(BOOL)shouldArchive;
-(int)archiveDestination;
-(void)_rebuildTableOfContentsSynchronously;
-(void)updateMessages:(id)arg1 updateNumberOfAttachments:(BOOL)arg2 ;
-(id)messageIdRollCall:(id)arg1 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2 ;
-(void)undeleteMessages:(id)arg1 ;
-(id)account;
-(unsigned long long)unreadCount;
-(unsigned long long)totalCount;
-(BOOL)isOpened;
@end

