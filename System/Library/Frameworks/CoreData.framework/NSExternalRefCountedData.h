/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:02 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface NSExternalRefCountedData : NSObject {

	int _cd_rc;
	int _externalReferenceCount;
	struct {
		unsigned _invalidToOnes : 1;
		unsigned _hasTemporaryID : 1;
		unsigned _backgroundDealloc : 1;
		unsigned _reservedFlags : 1;
		unsigned _virtualfk_count : 14;
		unsigned _ordkey_count : 14;
	}  _externalRefFlags;
	id* _toManyMap;
	double _birth;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)_initializeRelationshipCaches;
-(id)initWithOptions:(unsigned)arg1 andTimestamp:(double)arg2 ;
-(void)incrementRefCount;
-(int)decrementRefCount;
-(int)externalReferenceCount;
-(void)incrementExternalReferenceCount:(int)arg1 ;
-(void)copyRelationshipCachesFrom:(id)arg1 ;
-(void)releaseRelationshipCaches;
-(void)updateMissingRelationshipCachesFromOriginal:(id)arg1 ;
-(id)relatedObjectIDsForProperty:(id)arg1 ;
-(double)timestampForProperty:(id)arg1 ;
-(void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(id)ancillaryOrderKeysForProperty:(id)arg1 ;
-(void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 andTimestamp:(double)arg4 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(BOOL)_isDeallocating;
-(unsigned)options;
-(BOOL)_tryRetain;
-(id)objectID;
@end

