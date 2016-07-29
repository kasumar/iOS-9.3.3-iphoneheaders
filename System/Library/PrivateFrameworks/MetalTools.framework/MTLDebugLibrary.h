/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsLibrary.h>

@class MTLCompileOptions;

@interface MTLDebugLibrary : MTLToolsLibrary {

	unsigned long long _type;
	id _code;
	MTLCompileOptions* _compileOptions;

}

@property (assign,nonatomic) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id code;                                         //@synthesize code=_code - In the implementation block
@property (nonatomic,copy) MTLCompileOptions * compileOptions;              //@synthesize compileOptions=_compileOptions - In the implementation block
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)code;
-(void)setCode:(id)arg1 ;
-(id)newFunctionWithName:(id)arg1 ;
-(id)initWithLibrary:(id)arg1 parent:(id)arg2 type:(unsigned long long)arg3 code:(id)arg4 options:(id)arg5 ;
-(MTLCompileOptions *)compileOptions;
-(void)setCompileOptions:(MTLCompileOptions *)arg1 ;
@end

