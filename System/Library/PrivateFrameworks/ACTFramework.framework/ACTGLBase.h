/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:26 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ACTFramework/ACTFramework-Structs.h>
#import <libobjc.A.dylib/ESRenderer.h>

@class EAGLContext, NSString;

@interface ACTGLBase : NSObject <ESRenderer> {

	EAGLContext* mGLContext;
	EAGLContext* mGLBackupContext;
	unsigned mFramebuffer;
	unsigned mTextureArray[32];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(id)context;
-(BOOL)initializeOffScreenBuffers;
-(void)releaseTextures;
-(void)deleteBuffers;
-(int)checkCompileStatusForShader:(unsigned)arg1 ;
-(int)checkLinkStatusForProgram:(unsigned)arg1 ;
-(void)backupContext;
-(void)restoreContext;
-(void)setCurrentContext;
-(unsigned)createProgramWithVertexShader:(const char*)arg1 fragmentShader:(const char*)arg2 ;
-(int)create:(unsigned char)arg1 destinationBuffers:(_CVBuffer*)arg2 ofWidth:(int)arg3 andHeight:(int)arg4 ;
-(int)renderBuffer:(IOSurfaceRef)arg1 intoBuffer:(IOSurfaceRef)arg2 planeIndex:(unsigned)arg3 usingProgram:(unsigned)arg4 interpolate:(unsigned)arg5 viewportOrigX:(int)arg6 viewportOrigY:(int)arg7 viewportWidth:(int)arg8 viewportHeight:(int)arg9 numIters:(unsigned)arg10 ;
-(int)loadBuffer:(IOSurfaceRef)arg1 inTextureUnit:(unsigned)arg2 uniformName:(const char*)arg3 planeIndex:(unsigned)arg4 usingProgram:(unsigned)arg5 ;
-(int)renderIntoBuffer:(IOSurfaceRef)arg1 planeIndex:(unsigned)arg2 usingProgram:(unsigned)arg3 viewportOrigX:(int)arg4 viewportOrigY:(int)arg5 viewportWidth:(int)arg6 viewportHeight:(int)arg7 ;
-(int)renderInto16bitYBuffer:(unsigned short*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 usingProgram:(unsigned)arg4 ;
-(int)checkProgramValidity:(unsigned)arg1 ;
@end

