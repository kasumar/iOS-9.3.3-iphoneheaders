/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeInfo.h>

@class NSUUID, TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo {

	NSUUID* mConnectedFromID;
	NSUUID* mConnectedToID;
	struct {
		unsigned connectedFrom : 1;
		unsigned connectedTo : 1;
	}  mInvalidFlags;

}

@property (assign,nonatomic) TSDDrawableInfo * connectedFrom; 
@property (assign,nonatomic) TSDDrawableInfo * connectedTo; 
@property (nonatomic,retain) NSUUID * connectedFromID; 
@property (nonatomic,retain) NSUUID * connectedToID; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ConnectionLineArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const ConnectionLineArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveGeometryToArchive:(GeometryArchive*)arg1 archiver:(id)arg2 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willCopyWithOtherDrawables:(id)arg1 ;
-(void)didCopy;
-(id)presetKind;
-(Class)repClass;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3 ;
-(TSDDrawableInfo *)connectedFrom;
-(TSDDrawableInfo *)connectedTo;
-(id)computeLayoutInfoGeometry;
-(void)performBlockWithTemporaryLayout:(/*^block*/id)arg1 ;
-(CGAffineTransform)computeLayoutFullTransform;
-(BOOL)canAnchor;
-(void)setConnectedFrom:(TSDDrawableInfo *)arg1 ;
-(void)setConnectedTo:(TSDDrawableInfo *)arg1 ;
-(NSUUID *)connectedToID;
-(NSUUID *)connectedFromID;
-(void)setConnectedToID:(NSUUID *)arg1 ;
-(void)setConnectedFromID:(NSUUID *)arg1 ;
-(void)computeLayoutInfoGeometry:(id*)arg1 andPathSource:(id*)arg2 ;
-(void)dealloc;
-(Class)layoutClass;
-(void)acceptVisitor:(id)arg1 ;
@end

