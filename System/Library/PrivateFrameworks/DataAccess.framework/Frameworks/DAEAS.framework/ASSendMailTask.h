/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSData, NSString;

@interface ASSendMailTask : ASTask {

	NSData* _mimeMessage;
	NSString* _messageID;

}
-(id)contentType;
-(id)command;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)parameterData;
-(id)initWithMessage:(id)arg1 messageID:(id)arg2 ;
-(id)requestBodyStreamOutKnownSize:(int*)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end

