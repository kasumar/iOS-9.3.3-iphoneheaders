/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, ML3MusicLibrary;

@interface ML3ExportItem : NSObject {

	NSDictionary* _properties;
	long long _persistentId;
	ML3MusicLibrary* _library;
	Class _entityClass;

}

@property (nonatomic,readonly) long long persistentId;                 //@synthesize persistentId=_persistentId - In the implementation block
@property (nonatomic,readonly) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) Class entityClass;                      //@synthesize entityClass=_entityClass - In the implementation block
+(unsigned*)allExportPropertyKeysForEntityClass:(Class)arg1 returnedCount:(unsigned*)arg2 ;
-(id)description;
-(BOOL)isValid;
-(id)valueForProperty:(unsigned)arg1 ;
-(id)exportData;
-(id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 library:(id)arg3 ;
-(id)initWithPersistentId:(long long)arg1 entityClass:(Class)arg2 propertyKeysToExport:(unsigned*)arg3 numKeys:(unsigned)arg4 library:(id)arg5 ;
-(id)_propertyNamesFromKeys:(unsigned*)arg1 numKeys:(unsigned)arg2 ;
-(id)initWithPersistentId:(long long)arg1 entityClass:(id)arg2 properties:(id)arg3 library:(id)arg4 ;
-(id)_propertyNameForKey:(unsigned)arg1 ;
-(id)_allExportPropertyNames;
-(char)charValueForProperty:(unsigned)arg1 ;
-(short)shortValueForProperty:(unsigned)arg1 ;
-(int)longValueForProperty:(unsigned)arg1 ;
-(long long)longlongValueForProperty:(unsigned)arg1 ;
-(id)dataValueForProperty:(unsigned)arg1 ;
-(BOOL)hasValueForProperty:(unsigned)arg1 ;
-(unsigned*)propertyKeysToExport:(unsigned*)arg1 ;
-(long long)persistentId;
-(ML3MusicLibrary *)library;
-(Class)entityClass;
-(id)stringValueForProperty:(unsigned)arg1 ;
@end

