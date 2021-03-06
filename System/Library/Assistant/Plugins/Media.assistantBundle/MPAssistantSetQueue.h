/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPSetQueue.h>
#import <Accessibility/AFServiceCommand.h>

@protocol AFServiceHelper;
@class NSString;

@interface MPAssistantSetQueue : SAMPSetQueue <AFServiceCommand> {

	id<AFServiceHelper> _serviceHelper;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_performRadioStationSetQueue;
-(id)_performMediaItemsSetQueue;
-(id)_performStoreItemsSetQueue;
-(BOOL)_networkConditionsPermitRadioPlayback;
-(BOOL)_networkConditionsPermitFusePlayback;
-(BOOL)_radioIsAvailable;
-(void)_prepare;
-(id)_perform;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
@end

