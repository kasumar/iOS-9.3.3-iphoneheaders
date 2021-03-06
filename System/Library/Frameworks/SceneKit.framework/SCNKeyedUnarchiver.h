/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:42 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedUnarchiver.h>

@class NSDictionary, SCNAssetCatalog, NSString;

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver {

	NSDictionary* _context;
	SCNAssetCatalog* _assetCatalog;
	NSString* lookUpKey;
	id lookUpFoundInstance;

}

@property (nonatomic,retain) NSDictionary * context;                      //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) SCNAssetCatalog * assetCatalog;              //@synthesize assetCatalog=_assetCatalog - In the implementation block
@property (nonatomic,retain) NSString * lookUpKey; 
@property (nonatomic,retain) id lookUpFoundInstance; 
-(void)dealloc;
-(NSDictionary *)context;
-(void)setContext:(NSDictionary *)arg1 ;
-(SCNAssetCatalog *)assetCatalog;
-(void)setAssetCatalog:(SCNAssetCatalog *)arg1 ;
-(NSString *)lookUpKey;
-(void)setLookUpKey:(NSString *)arg1 ;
-(id)lookUpFoundInstance;
-(void)setLookUpFoundInstance:(id)arg1 ;
@end

