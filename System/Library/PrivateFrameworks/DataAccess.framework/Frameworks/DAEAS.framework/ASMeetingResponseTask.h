/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:16 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray;

@interface ASMeetingResponseTask : ASTask {

	NSArray* _responseItems;

}

@property (nonatomic,retain) NSArray * responseItems;              //@synthesize responseItems=_responseItems - In the implementation block
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(id)initWithResponseItems:(id)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(NSArray *)responseItems;
-(void)setResponseItems:(NSArray *)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end

