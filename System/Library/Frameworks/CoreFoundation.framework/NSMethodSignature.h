/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSMethodSignature : NSObject {

	void* _private;
	void** _reserved[6];

}

@property (readonly) unsigned long long numberOfArguments; 
@property (readonly) unsigned long long frameLength; 
@property (readonly) const char* methodReturnType; 
@property (readonly) unsigned long long methodReturnLength; 
+(id)cd_signatureWithObjCTypes:(const char*)arg1 ;
+(id)signatureWithObjCTypes:(const char*)arg1 ;
-(BOOL)_gkHasReplyBlock;
-(BOOL)_gkTakesBlockAtIndex:(unsigned long long)arg1 ;
-(const char*)cd_getArgumentTypeAtIndex:(int)arg1 ;
-(BOOL)_cheapTypeString:(char*)arg1 maxLength:(long long)arg2 ;
-(BOOL)isOneway;
-(BOOL)_isHiddenStructRet;
-(NSMethodFrameArgInfo*)_argInfo:(long long)arg1 ;
-(SCD_Struct_NS26*)_frameDescriptor;
-(id)_typeString;
-(id)_signatureForBlockAtArgumentIndex:(long long)arg1 ;
-(Class)_classForObjectAtArgumentIndex:(long long)arg1 ;
-(id)_protocolsForObjectAtArgumentIndex:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(const char*)getArgumentTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfArguments;
-(unsigned long long)methodReturnLength;
-(const char*)methodReturnType;
-(unsigned long long)frameLength;
-(void)finalize;
@end

