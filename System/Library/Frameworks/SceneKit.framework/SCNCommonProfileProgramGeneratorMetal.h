/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:43 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@class NSString, NSArray;

@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator {

	NSString* _originalSourceCode;
	NSArray* _injectionPointRanges;

}
-(void)dealloc;
-(id)init;
-(int)profile;
-(C3DFXProgramRef)_programWithHashCode:(C3DRendererElementProgramHashCodeRef)arg1 introspectionDataPtr:(void*)arg2 ;
@end
