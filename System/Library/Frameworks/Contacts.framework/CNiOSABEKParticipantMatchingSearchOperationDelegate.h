/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABSearchOperationDelegate.h>

@class NSString;

@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject <ABSearchOperationDelegate> {

	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)_completeWithRecord:(void*)arg1 ;
-(void)searchOperation:(id)arg1 didFindMatches:(id)arg2 moreComing:(BOOL)arg3 ;
@end
