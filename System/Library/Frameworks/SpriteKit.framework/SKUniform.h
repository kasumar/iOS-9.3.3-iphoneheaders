/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, SKTexture;

@interface SKUniform : NSObject <NSCopying, NSCoding> {

	long long _type;
	NSString* _name;
	unsigned long long _seed;
	SKTexture* _textureValue;
	SCD_Union_SK61 _value;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long uniformType; 
@property (nonatomic,retain) SKTexture * textureValue; 
@property (assign) float floatValue; 
@property (assign) _GLKVector2 floatVector2Value; 
@property (assign) _GLKVector3 floatVector3Value; 
@property (assign) _GLKVector4 floatVector4Value; 
@property (assign) _GLKMatrix2 floatMatrix2Value; 
@property (assign) _GLKMatrix3 floatMatrix3Value; 
@property (assign) _GLKMatrix4 floatMatrix4Value; 
@property (assign) unsigned long long _seed;                        //@synthesize seed=_seed - In the implementation block
+(id)uniformWithName:(id)arg1 ;
+(id)uniformWithName:(id)arg1 float:(float)arg2 ;
+(id)uniformWithName:(id)arg1 floatVector2:(_GLKVector2)arg2 ;
+(id)uniformWithName:(id)arg1 floatVector3:(_GLKVector3)arg2 ;
+(id)uniformWithName:(id)arg1 floatVector4:(_GLKVector4)arg2 ;
+(id)uniformWithName:(id)arg1 floatMatrix2:(_GLKMatrix2)arg2 ;
+(id)uniformWithName:(id)arg1 floatMatrix3:(_GLKMatrix3)arg2 ;
+(id)uniformWithName:(id)arg1 floatMatrix4:(_GLKMatrix4)arg2 ;
+(id)uniformWithName:(id)arg1 texture:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)floatValue;
-(unsigned long long)_seed;
-(id)initWithName:(id)arg1 ;
-(void)setFloatValue:(float)arg1 ;
-(long long)uniformType;
-(SKTexture *)textureValue;
-(_GLKVector2)floatVector2Value;
-(_GLKVector3)floatVector3Value;
-(_GLKVector4)floatVector4Value;
-(_GLKMatrix2)floatMatrix2Value;
-(_GLKMatrix3)floatMatrix3Value;
-(_GLKMatrix4)floatMatrix4Value;
-(void)set_seed:(unsigned long long)arg1 ;
-(void)setTextureValue:(SKTexture *)arg1 ;
-(void)setFloatVector2Value:(_GLKVector2)arg1 ;
-(void)setFloatVector3Value:(_GLKVector3)arg1 ;
-(void)setFloatVector4Value:(_GLKVector4)arg1 ;
-(void)setFloatMatrix2Value:(_GLKMatrix2)arg1 ;
-(void)setFloatMatrix3Value:(_GLKMatrix3)arg1 ;
-(void)setFloatMatrix4Value:(_GLKMatrix4)arg1 ;
-(id)initWithName:(id)arg1 float:(float)arg2 ;
-(id)initWithName:(id)arg1 floatVector2:(_GLKVector2)arg2 ;
-(id)initWithName:(id)arg1 floatVector3:(_GLKVector3)arg2 ;
-(id)initWithName:(id)arg1 floatVector4:(_GLKVector4)arg2 ;
-(id)initWithName:(id)arg1 floatMatrix2:(_GLKMatrix2)arg2 ;
-(id)initWithName:(id)arg1 floatMatrix3:(_GLKMatrix3)arg2 ;
-(id)initWithName:(id)arg1 floatMatrix4:(_GLKMatrix4)arg2 ;
-(id)initWithName:(id)arg1 texture:(id)arg2 ;
@end

