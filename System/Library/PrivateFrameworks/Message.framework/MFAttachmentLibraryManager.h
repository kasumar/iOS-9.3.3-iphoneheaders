/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAttachmentComposeManager.h>

@interface MFAttachmentLibraryManager : MFAttachmentComposeManager
-(void)dealloc;
-(void)removeProviderForBaseURL:(id)arg1 ;
-(id)_dataProviderForAttachmentURL:(id)arg1 error:(id*)arg2 ;
-(void)_didReceiveCompactedMessagesNotification:(id)arg1 ;
-(void)cancelFetchForAttachmentWithURL:(id)arg1 ;
-(id)initWithPrimaryLibrary:(id)arg1 ;
-(id)attachmentsForMessage:(id)arg1 withSchemes:(id)arg2 ;
-(void)cancelFetchesForMessageImmediately:(id)arg1 ;
@end

