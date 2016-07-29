/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MessageConsumer.h>
#import <libobjc.A.dylib/QueryProgressMonitor.h>

@class NSMutableArray, MFActivityMonitor;

@interface _MFMessageCollector : NSObject <MessageConsumer, QueryProgressMonitor> {

	NSMutableArray* _messages;
	MFActivityMonitor* _monitor;
	/*^block*/id _transmogrifier;

}

@property (nonatomic,copy) id transmogrifier;              //@synthesize transmogrifier=_transmogrifier - In the implementation block
-(void)dealloc;
-(id)init;
-(id)messages;
-(void)newMessagesAvailable:(id)arg1 ;
-(id)copyMessages;
-(void)setTransmogrifier:(id)arg1 ;
-(id)transmogrifier;
-(BOOL)shouldCancel;
@end

