/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessageInfoOrderedSet, MFMessageInfo, NSArray;

@interface MFConversationInfo : NSObject {

	MFMessageInfoOrderedSet* _messageInfoSet;
	long long _conversationID;

}

@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,readonly) MFMessageInfo * firstMessage; 
@property (nonatomic,readonly) MFMessageInfo * lastMessage; 
@property (nonatomic,readonly) unsigned long long messagesCount; 
@property (nonatomic,readonly) unsigned long long messageCountWithDuplicates; 
@property (nonatomic,readonly) NSArray * uniqueMessageInfos; 
@property (nonatomic,readonly) NSArray * allMessageInfos; 
-(void)dealloc;
-(BOOL)isEmpty;
-(id)messageInfoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)removeMessageInfo:(id)arg1 ;
-(NSArray *)allMessageInfos;
-(id)duplicatesOfMessageInfo:(id)arg1 ;
-(unsigned long long)addMessageInfo:(id)arg1 ;
-(unsigned long long)indexOfMessageInfo:(id)arg1 ;
-(unsigned long long)indexWhereMessageInfoWouldBeInserted:(id)arg1 ;
-(id)messageInfoEquivalentToMessageInfo:(id)arg1 ;
-(NSArray *)uniqueMessageInfos;
-(MFMessageInfo *)firstMessage;
-(unsigned long long)messagesCount;
-(id)initWithConversationID:(long long)arg1 comparator:(/*^block*/id)arg2 ;
-(unsigned long long)messageCountWithDuplicates;
-(id)visibleMessageInfo;
-(void)mergeWithConversation:(id)arg1 ;
-(unsigned long long)conversationState;
-(MFMessageInfo *)lastMessage;
@end

