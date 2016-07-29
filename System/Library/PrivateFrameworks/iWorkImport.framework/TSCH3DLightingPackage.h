/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface TSCH3DLightingPackage : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _lights;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedName; 
+(id)instanceWithArchive:(const Chart3DLightingPackageArchive*)arg1 unarchiver:(id)arg2 ;
+(id)packageFromName:(id)arg1 ;
+(id)localizedNameForName:(id)arg1 ;
+(id)allNamedPackages;
+(id)package;
-(void)saveToArchive:(Chart3DLightingPackageArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DLightingPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)didInitFromSOS;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 ;
-(void)addLight:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedName;
@end

