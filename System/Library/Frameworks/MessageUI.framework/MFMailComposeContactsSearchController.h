/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFContactsSearchConsumer.h>

@protocol MFMailComposeContactsSearchControllerDelegate;
@class MFContactsSearchManager, MFContactsSearchResultsModel, NSMutableArray, NSNumber, NSString;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer> {

	MFContactsSearchManager* _manager;
	MFContactsSearchResultsModel* _model;
	NSMutableArray* _autocompleteSearchResults;
	NSMutableArray* _corecipientSearchResults;
	NSNumber* _corecipientSearchTaskID;
	BOOL _foundAnySearchResults;
	unsigned long long _waitingOnSearchResultsCount;
	id<MFMailComposeContactsSearchControllerDelegate> _delegate;
	NSNumber* _taskID;

}

@property (assign,nonatomic) id<MFMailComposeContactsSearchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSNumber * taskID;                                                       //@synthesize taskID=_taskID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MFMailComposeContactsSearchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<MFMailComposeContactsSearchControllerDelegate>)delegate;
-(void)_reset;
-(void)searchWithString:(id)arg1 enteredRecipients:(id)arg2 title:(id)arg3 ;
-(void)findCorecipientsWithRecipients:(id)arg1 ;
-(NSNumber *)taskID;
-(void)_cancelSearchAndNotify:(BOOL)arg1 ;
-(void)setTaskID:(NSNumber *)arg1 ;
-(void)_finishSearch;
-(void)searchWithString:(id)arg1 ;
-(void)cancelSearch;
-(void)removeRecipient:(id)arg1 ;
-(void)consumeSearchResults:(id)arg1 type:(unsigned long long)arg2 taskID:(id)arg3 ;
-(void)finishedSearchingForType:(unsigned long long)arg1 ;
-(void)finishedTaskWithID:(id)arg1 ;
-(void)consumeAutocompleteSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForAutocompleteResults;
-(void)consumeCorecipientSearchResults:(id)arg1 taskID:(id)arg2 ;
-(void)finishedSearchingForCorecipients;
-(void)beganNetworkActivity;
-(void)endedNetworkActivity;
-(void)didSelectRecipient:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

