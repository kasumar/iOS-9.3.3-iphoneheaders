/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUICachedLayout.h>

@class NSArray, NSString;

@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout> {

	CGSize* _sizes;
	CGSize _totalSize;
	NSArray* _links;

}

@property (nonatomic,readonly) NSArray * links;                     //@synthesize links=_links - In the implementation block
@property (nonatomic,readonly) CGSize totalSize;                    //@synthesize totalSize=_totalSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSArray *)links;
-(void)enumerateLinesUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithLayoutRequest:(id)arg1 ;
-(CGSize)sizeForLinkAtIndex:(long long)arg1 ;
-(CGSize)totalSize;
@end

