/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKMessagePartChatItem.h>

@class NSAttributedString;

@interface CKTextMessagePartChatItem : CKMessagePartChatItem

@property (nonatomic,copy,readonly) NSAttributedString * text; 
@property (nonatomic,copy,readonly) NSAttributedString * subject; 
@property (nonatomic,readonly) BOOL containsHyperlink; 
-(id)composition;
-(NSAttributedString *)text;
-(NSAttributedString *)subject;
-(id)loadTranscriptText;
-(Class)balloonViewClass;
-(id)pasteboardItems;
-(BOOL)containsHyperlink;
-(id)_time;
@end

