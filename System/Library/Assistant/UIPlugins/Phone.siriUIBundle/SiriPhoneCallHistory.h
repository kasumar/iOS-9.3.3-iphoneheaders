/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Phone.siriUIBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Phone/SiriPhoneCall.h>

@class SAPhoneCallHistory;

@interface SiriPhoneCallHistory : SiriPhoneCall {

	SAPhoneCallHistory* _callHistory;

}

@property (nonatomic,retain) SAPhoneCallHistory * callHistory;              //@synthesize callHistory=_callHistory - In the implementation block
-(void)_setStatusImage;
-(void)_setFormattedCallCount;
-(void)setCallHistory:(SAPhoneCallHistory *)arg1 ;
-(id)date;
-(SAPhoneCallHistory *)callHistory;
@end

