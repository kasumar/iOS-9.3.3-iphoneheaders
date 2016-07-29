/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessageChatItem.h>

@class NSAttributedString;

@interface IMMessagePartChatItem : IMMessageChatItem {

	NSAttributedString* _text;
	long long _index;

}

@property (nonatomic,copy,readonly) NSAttributedString * text;              //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long index;                               //@synthesize index=_index - In the implementation block
+(id)_newMessagePartsForMessageItem:(id)arg1 ;
+(id)_messageItemWithPartsDeleted:(id)arg1 fromMessageItem:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)text;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 ;
-(BOOL)canDelete;
@end

