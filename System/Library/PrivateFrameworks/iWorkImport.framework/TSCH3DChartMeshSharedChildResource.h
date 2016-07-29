/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DChartMeshResources;

@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent> {

	TSCH3DChartMeshResources* mParent;
	BOOL mChildRegenerated;
	int mCaching;
	DataBufferInfo mBufferInfo;
	unsigned long long mResourceIdentifier;

}

@property (readonly) DataBufferInfo bufferInfo; 
@property (assign,nonatomic) int caching; 
@property (nonatomic,readonly) unsigned long long resourceIdentifier; 
@property (assign,nonatomic) BOOL childRegenerated; 
+(id)resourceWithParent:(id)arg1 ;
-(void)clearParent;
-(DataBufferInfo)bufferInfo;
-(unsigned long long)resourceIdentifier;
-(int)caching;
-(void)setCaching:(int)arg1 ;
-(BOOL)childRegenerated;
-(void)setChildRegenerated:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithParent:(id)arg1 ;
@end

