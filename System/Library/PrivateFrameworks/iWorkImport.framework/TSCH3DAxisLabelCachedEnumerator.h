/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:51 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCH3DValueEnumerator, TSCH3DAxisLabelKind;

@interface TSCH3DAxisLabelCachedEnumerator : TSCH3DValueEnumerator {

	TSCH3DValueEnumerator* mCachee;
	TSCH3DAxisLabelKind* mKind;
	unsigned long long mCount;
	BOOL mShouldRender;
	BOOL mValid;
	int mLabelPosition;
	vector<TSCH3D::AxisLabelCacheItem, std::__1::allocator<TSCH3D::AxisLabelCacheItem> >* mCache;

}

@property (nonatomic,readonly) TSCH3DAxisLabelKind * kind; 
+(id)enumeratorWithAxisLabelEnumerator:(id)arg1 ;
-(BOOL)shouldRender;
-(id)initWithAxisLabelEnumerator:(id)arg1 ;
-(id)enumerator;
-(void)dealloc;
-(unsigned long long)count;
-(id)string;
-(void)update;
-(void)cache;
-(TSCH3DAxisLabelKind *)kind;
-(int)labelPosition;
@end

