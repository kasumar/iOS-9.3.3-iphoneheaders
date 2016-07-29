/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UIDictionaryManager : NSObject {

	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(id)assetManager;
-(id)init;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_currentlyAvailableDefinitionDictionaries;
-(id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(BOOL)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(id)_availableDictionaryAssets;
-(NSArray *)availableDefinitionDictionaries;
@end

