/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface MFAttachmentCompositionContext : NSObject {

	NSString* _contextID;
	NSURL* _attachmentsBaseURL;

}

@property (nonatomic,readonly) NSString * contextID;                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy) NSURL * attachmentsBaseURL;              //@synthesize attachmentsBaseURL=_attachmentsBaseURL - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
-(void)dealloc;
-(id)init;
-(NSString *)contextID;
-(NSArray *)attachments;
-(NSURL *)attachmentsBaseURL;
-(id)initWithContextID:(id)arg1 ;
-(void)setAttachmentsBaseURL:(NSURL *)arg1 ;
@end

