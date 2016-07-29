/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASSendMailTask.h>

@class NSString;

@interface ASSmartMailTask : ASSendMailTask {

	int _messageType;
	NSString* _originalMessageId;
	NSString* _originalFolderId;
	NSString* _originalLongId;
	BOOL _retryWithoutReferences;

}
-(id)contentType;
-(id)command;
-(int)commandCode;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)parameterData;
-(id)initWithMessage:(id)arg1 messageID:(id)arg2 messageType:(int)arg3 originalMessageID:(id)arg4 originalFolderID:(id)arg5 originalLongID:(id)arg6 ;
-(void)handleTopLevelErrorStatus:(id)arg1 ;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
@end

