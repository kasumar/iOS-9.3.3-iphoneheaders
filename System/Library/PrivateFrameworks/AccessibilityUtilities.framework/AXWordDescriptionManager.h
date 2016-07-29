/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel, NSString;

@interface AXWordDescriptionManager : NSObject {

	NSManagedObjectContext* _managedObjectContext;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectModel* _managedObjectModel;
	NSString* languageDialectCode;

}

@property (nonatomic,retain) NSString * languageDialectCode; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                          //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;              //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectModel * managedObjectModel;                              //@synthesize managedObjectModel=_managedObjectModel - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)languageCode;
-(NSManagedObjectModel *)managedObjectModel;
-(NSManagedObjectContext *)managedObjectContext;
-(NSPersistentStoreCoordinator *)persistentStoreCoordinator;
-(void)setLanguageDialectCode:(NSString *)arg1 ;
-(id)descriptionForWord:(id)arg1 ;
-(NSString *)languageDialectCode;
@end

