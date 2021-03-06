/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMAssertion.h>

@class IMSpringboardWallpaperManager, NSString;

@interface IMSpringboardWallpaperAnimationAssertion : NSObject <IMAssertion> {

	IMSpringboardWallpaperManager* _manager;

}

@property (nonatomic,__weak,readonly) IMSpringboardWallpaperManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IMSpringboardWallpaperManager *)manager;
-(void)dealloc;
-(void)invalidate;
-(id)initWithManager:(id)arg1 ;
@end

