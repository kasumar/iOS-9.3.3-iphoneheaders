/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFMessageBodyParserObject : NSObject {

	double _timeoutTime;
	BOOL _shouldAbort;
	BOOL _didTimeout;
	BOOL _copyBlocks;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(void)abortParsing;
-(void)copyBlocks;
-(void)messageBodyParserWillBeginParsing:(id)arg1 ;
-(BOOL)shouldProceedParsing;
-(BOOL)areBlocksCopied;
-(void)setTimeoutInterval:(double)arg1 ;
-(double)timeoutInterval;
@end

