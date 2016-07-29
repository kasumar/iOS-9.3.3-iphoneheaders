/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADDrawable.h>

@class ODDNodePoint, ODDColorTransform, ODDStyleDefinition;

@interface ODDDiagram : OADDrawable {

	ODDNodePoint* mDocumentPoint;
	ODDColorTransform* mColorTransform;
	ODDStyleDefinition* mStyleDefinition;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)documentPoint;
-(id)styleDefinition;
-(id)colorTransform;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)setDocumentPoint:(id)arg1 ;
@end
