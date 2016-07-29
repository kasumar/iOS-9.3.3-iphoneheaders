/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:17 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface VMUClassInfo : NSObject <NSCoding> {

	/*^block*/id _reader;
	unsigned long long _remoteIsa;
	unsigned _remotePointerSize;
	unsigned _ivarCount;
	unsigned _superclassOffset;
	unsigned _instanceSize;
	unsigned _ro_flags;
	unsigned _rw_flags;
	objc_ivar* _localIvarList;
	int* _ivarScanSizes;
	unsigned _remoteType;
	NSString* _remoteClassName;
	NSString* _remoteBinaryPath;
	VMUClassInfo* _superclassLayout;
	VMUClassInfo* _genericLayout;
	const char* _weakLayout;
	const char* _strongLayout;
	const char* _extendedLayout;
	char* _scanMap;
	char _hasSpecificLayout;

}

@property (readonly) NSString * typeName; 
@property (readonly) NSString * className;                             //@synthesize remoteClassName=_remoteClassName - In the implementation block
@property (readonly) NSString * binaryName; 
@property (readonly) NSString * binaryPath;                            //@synthesize remoteBinaryPath=_remoteBinaryPath - In the implementation block
@property (readonly) NSString * fullIvarDescription; 
@property (readonly) NSString * shortIvarDescription; 
@property (readonly) VMUClassInfo * superclassInfo;                    //@synthesize superclassLayout=_superclassLayout - In the implementation block
@property (readonly) VMUClassInfo * genericInfo; 
@property (readonly) int infoType; 
@property (readonly) unsigned long long remoteIsa;                     //@synthesize remoteIsa=_remoteIsa - In the implementation block
@property (readonly) unsigned instanceSize;                            //@synthesize instanceSize=_instanceSize - In the implementation block
@property (readonly) BOOL isARR; 
@property (readonly) BOOL isRealized; 
@property (readonly) BOOL isMetaClass; 
@property (readonly) BOOL isRootClass; 
@property (readonly) BOOL hasCppConstructorOrDestructor; 
@property (readonly) unsigned long long specificInstance; 
@property (nonatomic,readonly) BOOL hasSpecificLayout; 
+(void)initialize;
+(id)classInfoWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3 ;
+(id)descriptionForTypeEncoding:(const char*)arg1 ivarName:(const char*)arg2 ;
+(id)classInfoWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)type;
-(NSString *)className;
-(id)initWithClassName:(id)arg1 binaryPath:(id)arg2 type:(int)arg3 ;
-(const char*)_copyRemoteNameAt:(unsigned long long)arg1 ;
-(const char*)_copyRemoteTypeAt:(unsigned long long)arg1 ;
-(int)_readRemoteIntAt:(unsigned long long)arg1 ;
-(void)_faultScanMap;
-(void)_processExtendedLayout:(const char*)arg1 ;
-(BOOL)isARR;
-(void)_processARRLayout:(const char*)arg1 scanType:(int)arg2 ;
-(void)_demangleClassName;
-(BOOL)hasSpecificLayout;
-(unsigned long long)_readRemotePointerAt:(unsigned long long)arg1 ;
-(BOOL)isRealized;
-(objc_ivarRef)_copyRemoteIvarAt:(unsigned long long)arg1 ;
-(const char*)_copyRemoteLayout:(unsigned long long)arg1 ;
-(void)_parseIvarsAndLayouts;
-(BOOL)isRootClass;
-(id)_initWithClass:(unsigned long long)arg1 realizedOnly:(BOOL)arg2 infoMap:(id)arg3 symbolicator:(CSTypeRef)arg4 type:(int)arg5 memoryReader:(/*^block*/id)arg6 ;
-(unsigned)instanceSize;
-(void)_setClassNameWithAddress:(unsigned long long)arg1 ;
-(NSString *)binaryPath;
-(unsigned long long)remoteIsa;
-(NSString *)binaryName;
-(int)infoType;
-(BOOL)hasCppConstructorOrDestructor;
-(VMUClassInfo *)genericInfo;
-(void)_logDescriptionWithSuperclasses:(BOOL)arg1 indentation:(int)arg2 toLogger:(/*^block*/id)arg3 ;
-(id)_ivarDescription:(unsigned)arg1 withSpacing:(unsigned)arg2 ;
-(id)instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 ;
-(void)enumerateScanLocationsToSize:(unsigned)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateKnownSublayoutsForObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_instanceSpecificInfoForObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 withReader:(/*^block*/id)arg3 ;
-(id)_specificCopy:(unsigned long long)arg1 instanceSize:(unsigned)arg2 superclassOffset:(unsigned)arg3 ;
-(void)_setExtendedLayout:(const char*)arg1 ;
-(void)enumerateIvarsWithBlock:(/*^block*/id)arg1 ;
-(NSString *)fullIvarDescription;
-(id)initWithClassName:(id)arg1 binaryName:(id)arg2 type:(int)arg3 ;
-(id)initWithClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(CSTypeRef)arg3 type:(int)arg4 memoryReader:(/*^block*/id)arg5 ;
-(id)initWithRealizedClass:(unsigned long long)arg1 infoMap:(id)arg2 symbolicator:(CSTypeRef)arg3 type:(int)arg4 memoryReader:(/*^block*/id)arg5 ;
-(void)serializeWithClassMap:(id)arg1 simpleSerializer:(id)arg2 ;
-(id)initWithSerializer:(id)arg1 classMap:(id)arg2 version:(long long)arg3 ;
-(void)setMemoryReader:(/*^block*/id)arg1 ;
-(void)scanObject:(unsigned long long)arg1 ofSize:(unsigned)arg2 withBlock:(/*^block*/id)arg3 ;
-(objc_ivarRef)ivarWithOffset:(unsigned long long)arg1 ;
-(void)_setIsa:(unsigned long long)arg1 ;
-(NSString *)shortIvarDescription;
-(id)scanDescriptionWithSize:(unsigned)arg1 ;
-(BOOL)isMetaClass;
-(id)initWithIsaPointer:(unsigned long long)arg1 symbolicator:(CSTypeRef)arg2 ;
-(id)instanceSpecificInfoForObject:(unsigned long long)arg1 ;
-(void)enumerateKnownSublayoutsForObject:(unsigned long long)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)specificInstance;
-(VMUClassInfo *)superclassInfo;
-(NSString *)typeName;
@end

