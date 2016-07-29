/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQWrapPointGenerator.h>

@class GQDAffineGeometry, GQDBezierPath, NSString;

@interface GQDDrawable : NSObject <GQWrapPointGenerator> {

	GQDAffineGeometry* mGeometry;
	CFURLRef mUrl;
	char* mUid;
	GQDBezierPath* mWrapPath;
	GQDAffineGeometry* mWrapGeometry;
	set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >* mInnerWrapPoints;
	BOOL mHasPagesOrder;
	long long mPagesOrder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)collectWrapPoints:(id)arg1 forPath:(CGPathRef)arg2 context:(FindLinesContext*)arg3 ;
-(CGPathRef)createBezierPath;
-(const set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)wrapPoints;
-(void)addWrapPoint:(id)arg1 ;
-(vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > >*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4 ;
-(void)clearWrapPoints;
-(int)collectWrapPointsForState:(id)arg1 graphicStyle:(id)arg2 ;
-(BOOL)hasPagesOrder;
-(int)pagesOrder;
-(void)dealloc;
-(CFURLRef)url;
-(id)geometry;
-(const char*)uid;
-(CFStringRef)urlString;
@end

