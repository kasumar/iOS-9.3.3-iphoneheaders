/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/ETSettings.bundle/ETSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FKPerson;

@interface ETPhotoCacheEntry : NSObject {

	NSMutableDictionary* _styleToDataDictionary;
	FKPerson* _person;

}

@property (nonatomic,retain) FKPerson * person;              //@synthesize person=_person - In the implementation block
-(void)setPhoto:(id)arg1 forStyle:(long long)arg2 ;
-(void)willUpdateForStyle:(long long)arg1 ;
-(void)evictPhotoForStyle:(long long)arg1 ;
-(void)evictPhotosForAllStyles;
-(id)_createDataIfNecessaryForStyle:(long long)arg1 ;
-(id)cachedStyles;
-(id)photoForStyle:(long long)arg1 ;
-(unsigned long long)stateForStyle:(long long)arg1 ;
-(id)init;
-(id)description;
-(void)setPerson:(FKPerson *)arg1 ;
-(FKPerson *)person;
@end

