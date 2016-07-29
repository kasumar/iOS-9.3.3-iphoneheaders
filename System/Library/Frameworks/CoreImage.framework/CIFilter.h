/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIImage, NSString, NSArray, NSDictionary;

@interface CIFilter : NSObject <NSSecureCoding, NSCopying> {

	void** _priv[8];

}

@property (nonatomic,readonly) CIImage * outputImage; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * inputKeys; 
@property (nonatomic,readonly) NSArray * outputKeys; 
@property (nonatomic,readonly) NSDictionary * attributes; 
+(id)_pl_propertyArrayFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_pl_filterArrayFromProperties:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)filterWithImageURL:(id)arg1 options:(id)arg2 ;
+(id)filterWithImageData:(id)arg1 options:(id)arg2 ;
+(id)filterWithName:(id)arg1 setDefaults:(BOOL)arg2 ;
+(id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 ;
+(id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3 ;
+(id)allCategories:(BOOL)arg1 ;
+(id)filterNamesInCategories:(id)arg1 ;
+(id)filterWithName:(id)arg1 withInputParameters:(id)arg2 ;
+(id)filterNamesInCategory:(id)arg1 ;
+(void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3 ;
+(id)localizedNameForFilterName:(id)arg1 ;
+(id)localizedNameForCategory:(id)arg1 ;
+(id)localizedDescriptionForFilterName:(id)arg1 ;
+(id)localizedReferenceDocumentationForFilterName:(id)arg1 ;
+(id)filterWithName:(id)arg1 ;
+(id)filterWithName:(id)arg1 keysAndValues:(id)arg2 ;
+(id)customAttributes;
+(id)filterWithString:(id)arg1 ;
+(CGImageMetadataRef)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromImageMetadata:(CGImageMetadataRef)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromProperties:(id)arg1 ;
+(id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(CGRect)arg2 error:(id*)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(CGColorSpaceRef)arg4 ;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inSpace:(CGColorSpaceRef)arg4 ;
-(int)compatibilityVersion;
-(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_serializedXMPString;
-(void)setIdentity;
-(void)setOption:(id)arg1 forKey:(id)arg2 ;
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(BOOL)_filterClassInCategory:(id)arg1 ;
-(void)_crashed_when_dealloc_called_setValue_nil_forKey_probably_because_the_subclass_already_released_it:(id)arg1 ;
-(NSArray *)outputKeys;
-(id)_copyFilterWithZone:(NSZone*)arg1 ;
-(id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)attributes;
-(CIImage *)outputImage;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setDefaults;
-(id)apply:(id)arg1 ;
-(NSArray *)inputKeys;
-(void)finalize;
@end

