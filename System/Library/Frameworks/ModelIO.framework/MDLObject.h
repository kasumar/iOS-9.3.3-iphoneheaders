/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@protocol MDLObjectContainerComponent;
@class NSMapTable, NSString;

@interface MDLObject : NSObject <MDLNamed> {

	MDLObject* _parent;
	NSMapTable* _components;
	NSString* name;
	id<MDLObjectContainerComponent> _children;

}

@property (assign,nonatomic,__weak) MDLObject * parent; 
@property (nonatomic,retain) id<MDLTransformComponent> transform; 
@property (nonatomic,retain) id<MDLObjectContainerComponent> children;              //@synthesize children=_children - In the implementation block
@property (nonatomic,copy) NSString * name; 
+(id)objectWithSCNNode:(id)arg1 ;
-(void)_updateAssociatedSCNNodeWithGeometrySetter:(/*^block*/id)arg1 texturePathProvider:(/*^block*/id)arg2 vertexAttributeNamed:(id)arg3 materialPropertyNamed:(id)arg4 ;
-(id)_associatedSCNNode;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTransform:(id<MDLTransformComponent>)arg1 ;
-(id<MDLTransformComponent>)transform;
-(SCD_Struct_MD19)boundingBoxAtTime:(double)arg1 ;
-(id)componentConformingToProtocol:(id)arg1 ;
-(void)setComponent:(id)arg1 forProtocol:(id)arg2 ;
-(void)setChildren:(id<MDLObjectContainerComponent>)arg1 ;
-(void)addChild:(id)arg1 ;
-(MDLObject *)parent;
-(id<MDLObjectContainerComponent>)children;
-(void)setParent:(MDLObject *)arg1 ;
@end

