/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement {

	long long _created;
	long long _updated;
	long long _deleted;

}

@property (assign,nonatomic) long long created;              //@synthesize created=_created - In the implementation block
@property (assign,nonatomic) long long updated;              //@synthesize updated=_updated - In the implementation block
@property (assign,nonatomic) long long deleted;              //@synthesize deleted=_deleted - In the implementation block
-(id)init;
-(void)setUpdated:(long long)arg1 ;
-(id)copyParseRules;
-(void)setCreatedItem:(id)arg1 ;
-(void)setUpdatedItem:(id)arg1 ;
-(void)setDeletedItem:(id)arg1 ;
-(long long)updated;
-(void)setCreated:(long long)arg1 ;
-(long long)created;
-(long long)deleted;
-(void)setDeleted:(long long)arg1 ;
@end

