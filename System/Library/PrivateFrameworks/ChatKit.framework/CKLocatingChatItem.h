/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem

@property (nonatomic,copy,readonly) NSString * locationText; 
-(id)description;
-(id)message;
-(id)sender;
-(id)time;
-(Class)balloonViewClass;
-(BOOL)isFromMe;
-(BOOL)failed;
-(void)configureBalloonView:(id)arg1 ;
-(NSString *)locationText;
@end

