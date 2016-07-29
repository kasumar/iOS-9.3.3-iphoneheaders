/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKFieldNode.h>

@class SKTexture;

@interface SKVelocityFieldNode : SKFieldNode {

	SKTexture* _velocityTexture;

}

@property (nonatomic,retain) SKTexture * velocityTexture;              //@synthesize velocityTexture=_velocityTexture - In the implementation block
@property (assign,nonatomic)  velocity; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setVelocity:;
-()velocity;
-(void)_initialize;
-(id)_descriptionClassName;
-(void)setVelocityTexture:(SKTexture *)arg1 ;
-(SKTexture *)velocityTexture;
@end
