/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/PersistentAddressBookAddress.h>
#import <MapsDataClassMigrator/SyncingHistoryItem.h>
#import <MapsDataClassMigrator/HistoryItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MKMapItem, NSError, NSData, NSDictionary;

@interface AddressBookAddress : PersistentAddressBookAddress <SyncingHistoryItem, HistoryItem, NSCopying> {

	void* _uncommittedRecord;
	void* _addressBook;
	NSString* _lastValidatedAddress;
	double _timestamp;
	MKMapItem* _geocodedMapItem;
	NSError* _geocodingError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,copy,readonly) NSString * singleLineAddress; 
@property (nonatomic,copy,readonly) NSString * singleLineAddressWithHomeCountry; 
@property (nonatomic,copy,readonly) NSString * compositeName; 
@property (nonatomic,copy,readonly) NSString * phoneticName; 
@property (nonatomic,readonly) int addressType; 
@property (nonatomic,readonly) BOOL isMeCard; 
@property (nonatomic,copy,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,copy) NSString * lastValidatedAddress;                                   //@synthesize lastValidatedAddress=_lastValidatedAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasStreetAddress; 
@property (nonatomic,readonly) double timestamp;                                              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) MKMapItem * geocodedMapItem;                                   //@synthesize geocodedMapItem=_geocodedMapItem - In the implementation block
@property (nonatomic,readonly) NSError * geocodingError;                                      //@synthesize geocodingError=_geocodingError - In the implementation block
+(void)setSafeAddressBookCanBeRefreshed:(BOOL)arg1 ;
+(BOOL)safeAddressBookCanBeRefreshed;
+(id)singleAddressForPerson:(void*)arg1 ;
+(id)_geocodedMapItemsByAddress;
+(void)_resetSharedAddressBookNeedsRefresh;
+(BOOL)addressBookSetMe:(void*)arg1 ;
+(BOOL)meCardExists;
+(id)singleAddressForContact:(id)arg1 ;
+(void)collectAddress;
+(id)meCardWorkAddress;
+(BOOL)addressBookAllowed;
+(void*)safeAddressBookRef;
+(void)refreshAddressBookIfNeeded:(void*)arg1 ;
+(id)meCardHomeAddress;
+(void)didReceiveMemoryWarning;
+(void)initialize;
-(BOOL)updateFromSyncData:(id)arg1 ;
-(NSData *)syncData;
-(BOOL)hasStreetAddress;
-(id)compositeNameMatchesForSearchString:(id)arg1 ;
-(NSString *)lastValidatedAddress;
-(id)initWithRecordID:(int)arg1 addressID:(int)arg2 addressBook:(void*)arg3 ;
-(void)setLastValidatedAddress:(NSString *)arg1 ;
-(id)_initWithUncommittedRecord:(void*)arg1 addressID:(int)arg2 addressBook:(void*)arg3 ;
-(NSString *)singleLineAddressWithHomeCountry;
-(void)forwardGeocodeAddress:(/*^block*/id)arg1 ;
-(void*)_record;
-(id)initWithRecordID:(int)arg1 addressID:(int)arg2 ;
-(NSError *)geocodingError;
-(MKMapItem *)geocodedMapItem;
-(void)_checkValid;
-(void)dealloc;
-(id)init;
-(unsigned long long)hash;
-(double)timestamp;
-(BOOL)isValid;
-(long long)type;
-(id)initWithData:(id)arg1 ;
-(NSString *)phoneticName;
-(NSDictionary *)addressDictionary;
-(int)addressType;
-(BOOL)isMeCard;
-(NSString *)singleLineAddress;
-(NSString *)compositeName;
@end

