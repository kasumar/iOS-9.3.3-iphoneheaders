/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SAUIDecoratedText, NSString;

@interface SASTGridCell : AceObject <SAAceSerializable>

@property (nonatomic,retain) SAUIDecoratedText * subTitle; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gridCell;
+(id)gridCellWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)title;
-(id)groupIdentifier;
-(void)setSubTitle:(SAUIDecoratedText *)arg1 ;
-(SAUIDecoratedText *)subTitle;
-(id)encodedClassName;
@end

