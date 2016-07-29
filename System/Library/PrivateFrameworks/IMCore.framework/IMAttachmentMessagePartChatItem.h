/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMMessagePartChatItem.h>

@class NSString;

@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem {

	NSString* _transferGUID;
	unsigned _wantsAttachmentContiguous : 1;

}

@property (nonatomic,copy,readonly) NSString * transferGUID;              //@synthesize transferGUID=_transferGUID - In the implementation block
-(Class)__ck_chatItemClass;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isAttachmentContiguousWithChatItem:(id)arg1 ;
-(id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 transferGUID:(id)arg4 ;
-(NSString *)transferGUID;
@end

