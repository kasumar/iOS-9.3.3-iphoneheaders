/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxDeleteMessageRequest.h>
#import <libobjc.A.dylib/MFDAMailAccountRequest.h>

@interface _MFDAMessageStoreDeleteRequest : DAMailboxDeleteMessageRequest <MFDAMailAccountRequest>

@property (nonatomic,readonly) BOOL shouldSend; 
@property (nonatomic,readonly) BOOL isUserRequested; 
-(BOOL)isUserRequested;
-(unsigned long long)generationNumber;
-(id)deferredOperation;
-(BOOL)shouldSend;
@end

