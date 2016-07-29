/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:15 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class OADDrawable, CMDrawableStyle, NSData, NSString, OADOrientedBounds;

@interface CMDrawableMapper : CMMapper {

	OADDrawable* mDrawable;
	CMDrawableStyle* mStyle;
	NSData* mImageBinaryData;
	NSString* mName;
	NSString* mExtension;
	int mResourceType;
	NSString* mSourcePath;
	CGRect mBox;
	float mRotation;
	BOOL mIsSupported;
	BOOL mIsCropped;
	CGRect mUncroppedBox;
	OADOrientedBounds* mOrientedBounds;

}
-(void)dealloc;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(id)initWithParent:(id)arg1 ;
-(id)blipAtIndex:(unsigned)arg1 ;
-(id)initWithOadDrawable:(id)arg1 parent:(id)arg2 ;
-(void)setBoundingBox;
-(void)setWithOadImage:(id)arg1 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)calculateUncroppedBox:(id)arg1 ;
-(BOOL)isCropped;
-(CGRect)uncroppedBox;
-(id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2 ;
-(void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)shapeTextBoxRect;
-(void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(BOOL)arg3 withState:(id)arg4 ;
-(void)mapBounds;
-(id)convertMetafileToPdf;
-(CGRect)box;
-(void)mapImageBinaryData;
@end

