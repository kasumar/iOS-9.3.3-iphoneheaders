/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface _MFMailboxUidEnumerator : NSEnumerator {

	NSMutableArray* _mailboxes;
	unsigned long long _index;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithMailbox:(id)arg1 ;
@end

