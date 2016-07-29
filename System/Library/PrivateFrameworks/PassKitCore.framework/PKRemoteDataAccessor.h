/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDataAccessor.h>

@class PKPassLibrary, NSString;

@interface PKRemoteDataAccessor : PKDataAccessor {

	PKPassLibrary* _library;
	NSString* _objectUniqueID;

}

@property (nonatomic,retain,readonly) PKPassLibrary * library;                //@synthesize library=_library - In the implementation block
@property (nonatomic,retain,readonly) NSString * objectUniqueID;              //@synthesize objectUniqueID=_objectUniqueID - In the implementation block
-(void)dealloc;
-(id)archiveData;
-(PKPassLibrary *)library;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(id)displayProfileOfType:(long long)arg1 ;
-(id)initWithLibrary:(id)arg1 objectUniqueID:(id)arg2 ;
-(NSString *)objectUniqueID;
-(void)updateSettings:(unsigned long long)arg1 ;
-(void)requestUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)noteShared;
@end

