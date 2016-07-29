/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailDropMailDelivery.h>
#import <libobjc.A.dylib/MFMessageRewriterPlaceholderResolver.h>

@class MFPlaceholderMessageRewriter, NSString;

@interface MFMailDropMailDeliveryUI : MFMailDropMailDelivery <MFMessageRewriterPlaceholderResolver> {

	MFPlaceholderMessageRewriter* _rewriter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_scaleImages:(id)arg1 toFit:(unsigned long long)arg2 resultingSize:(out unsigned long long*)arg3 ;
-(id)deliverSynchronouslyWithCompletion:(/*^block*/id)arg1 ;
-(id)_mailDropAttachmentHTMLStringForAttachment:(id)arg1 ;
-(id)_contentForAttachmentPassingTest:(/*^block*/id)arg1 ;
-(id)_headersByAddingMailDropHeaders:(id)arg1 ;
-(id)_mailDropBannerHTMLString;
-(id)contentForURL:(id)arg1 ;
-(id)contentForContentID:(id)arg1 ;
-(id)contentForPlaceholder:(id)arg1 ;
-(id)scaledImages:(id)arg1 ;
-(BOOL)updateMessageWithAttachmentsSynchronously;
@end

