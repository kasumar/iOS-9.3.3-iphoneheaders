/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAAceView;

@interface SAUIClearScreen : SABaseClientBoundCommand

@property (nonatomic,retain) SAAceView * initialView; 
+(id)clearScreen;
+(id)clearScreenWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)_afui_usefulUserResultType;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(SAAceView *)initialView;
-(void)setInitialView:(SAAceView *)arg1 ;
-(id)encodedClassName;
@end

