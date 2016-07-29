/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSURLCompletionSessionProtocol.h>

@class WBSHistoryService;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionSessionProtocol> {

	WBSHistoryService* _historyService;

}
-(id)initWithHistoryService:(id)arg1 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

