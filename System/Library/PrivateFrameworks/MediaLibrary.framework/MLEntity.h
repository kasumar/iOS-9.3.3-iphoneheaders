/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaLibrary.framework/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaLibrary/MediaLibrary-Structs.h>
@class MLLibrary;

@interface MLEntity : NSObject {

	shared_ptr<mlcore::Entity>* _entity;
	MLLibrary* _library;

}

@property (nonatomic,readonly) long long persistentID; 
@property (nonatomic,__weak,readonly) MLLibrary * library;                          //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) shared_ptr<mlcore::Entity>* coreEntity; 
+(Class)MLEntityClassWithCoreEntityClass:(EntityClass*)arg1 ;
+(id)MLEntityWithCoreEntity:(shared_ptr<mlcore::Entity>*)arg1 ;
+(EntityClass*)coreEntityClass;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForProperty:(void*)arg1 ;
-(MLLibrary *)library;
-(void)setValue:(id)arg1 forProperty:(void*)arg2 ;
-(long long)persistentID;
-(id)initWithCoreEntity:(shared_ptr<mlcore::Entity>*)arg1 ;
-(shared_ptr<mlcore::Entity>*)coreEntity;
@end

