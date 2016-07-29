/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DataAccess-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface DAAction : NSObject <NSCoding> {

	int _changeId;
	long long _itemChangeType;
	id _serverId;
	id _instanceId;
	id _changedItem;

}

@property (assign,nonatomic) long long itemChangeType;              //@synthesize itemChangeType=_itemChangeType - In the implementation block
@property (nonatomic,retain) id serverId;                           //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,retain) id instanceId;                         //@synthesize instanceId=_instanceId - In the implementation block
@property (nonatomic,retain) id changedItem;                        //@synthesize changedItem=_changedItem - In the implementation block
@property (assign,nonatomic) int changeId;                          //@synthesize changeId=_changeId - In the implementation block
-(id)asServerID;
-(id)asClientID;
-(id)asInstanceID;
-(void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2 ;
-(id)deletedNoteID;
-(ASNote*)note;
-(id)deletedToDoID;
-(ASToDo*)toDo;
-(id)message;
-(id)deletedContactID;
-(ASContact*)contact;
-(ASEvent*)event;
-(id)deletedEventID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)stringForItemChangeType:(long long)arg1 ;
-(int)changeId;
-(void)setItemChangeType:(long long)arg1 ;
-(void)_setChangedItem:(id)arg1 ;
-(void)setChangeId:(int)arg1 ;
-(id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4 ;
-(long long)itemChangeType;
-(id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 ;
-(id)instanceId;
-(void)setInstanceId:(id)arg1 ;
-(void)setServerId:(id)arg1 ;
-(id)serverId;
-(id)changedItem;
@end
