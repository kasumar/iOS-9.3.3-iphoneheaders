/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDate, NSString;

@interface _MFLibrarySearchableIndexClientState : NSObject {

	NSNumber* _transactionValue;
	long long _transaction;
	NSDate* _transactionDate;
	NSString* _systemBuildVersion;

}

@property (assign,nonatomic) long long transaction;                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionValue; 
@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * systemBuildVersion;                //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
+(id)clientStateFromData:(id)arg1 ;
+(id)clientState;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)archiveRepresentation;
-(void)setTransaction:(long long)arg1 ;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(NSNumber *)transactionValue;
-(NSString *)systemBuildVersion;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(long long)transaction;
@end

