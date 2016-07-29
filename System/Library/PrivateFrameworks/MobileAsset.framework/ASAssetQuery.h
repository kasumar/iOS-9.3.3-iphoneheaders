/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSArray, NSString;

@interface ASAssetQuery : NSObject {

	BOOL _queriesLocalAssetInformationOnly;
	NSPredicate* _predicate;
	NSArray* _results;
	double _networkTimeout;
	NSString* _assetType;

}

@property (nonatomic,retain) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) BOOL queriesLocalAssetInformationOnly;              //@synthesize queriesLocalAssetInformationOnly=_queriesLocalAssetInformationOnly - In the implementation block
@property (nonatomic,retain) NSArray * results;                                  //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) double networkTimeout;                              //@synthesize networkTimeout=_networkTimeout - In the implementation block
@property (nonatomic,copy) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
+(id)queryPredicateForProperties:(id)arg1 ;
-(double)networkTimeout;
-(NSString *)assetType;
-(void)dealloc;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)stopQuery;
-(NSPredicate *)predicate;
-(id)initWithAssetType:(id)arg1 ;
-(void)setQueriesLocalAssetInformationOnly:(BOOL)arg1 ;
-(id)runQueryAndReturnError:(id*)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(BOOL)queriesLocalAssetInformationOnly;
-(void)startQuery:(/*^block*/id)arg1 ;
-(void)setNetworkTimeout:(double)arg1 ;
@end

