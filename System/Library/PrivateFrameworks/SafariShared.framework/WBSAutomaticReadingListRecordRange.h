/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface WBSAutomaticReadingListRecordRange : NSObject <NSCopying> {

	id _newest;
	NSDate* _newestCreationDate;
	id _oldest;
	NSDate* _oldestCreationDate;

}

@property (nonatomic,copy) id newest;                                //@synthesize newest=_newest - In the implementation block
@property (nonatomic,copy) NSDate * newestCreationDate;              //@synthesize newestCreationDate=_newestCreationDate - In the implementation block
@property (nonatomic,copy) id oldest;                                //@synthesize oldest=_oldest - In the implementation block
@property (nonatomic,copy) NSDate * oldestCreationDate;              //@synthesize oldestCreationDate=_oldestCreationDate - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNewest:(id)arg1 newestCreationDate:(id)arg2 oldest:(id)arg3 oldestCreationDate:(id)arg4 ;
-(void)setNewest:(id)arg1 ;
-(void)setNewestCreationDate:(NSDate *)arg1 ;
-(void)setOldest:(id)arg1 ;
-(void)setOldestCreationDate:(NSDate *)arg1 ;
-(id)newest;
-(NSDate *)newestCreationDate;
-(id)oldest;
-(NSDate *)oldestCreationDate;
-(void)setNewest:(id)arg1 creationDate:(id)arg2 ;
-(void)setOldest:(id)arg1 creationDate:(id)arg2 ;
@end

