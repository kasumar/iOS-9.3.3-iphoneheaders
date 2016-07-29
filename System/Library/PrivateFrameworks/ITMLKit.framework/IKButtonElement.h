/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class IKTextElement, NSString, IKImageElement;

@interface IKButtonElement : IKViewElement

@property (nonatomic,readonly) long long buttonType; 
@property (nonatomic,retain,readonly) IKTextElement * text; 
@property (nonatomic,copy,readonly) NSString * confirmationText; 
@property (nonatomic,retain,readonly) IKImageElement * image; 
-(IKTextElement *)text;
-(IKImageElement *)image;
-(long long)buttonType;
-(NSString *)confirmationText;
@end

