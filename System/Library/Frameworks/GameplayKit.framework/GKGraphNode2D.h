/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGraphNode2D : GKGraphNode {

	GKCGraphNode2D* _cGraphNode2D;
	 _position;

}

@property (assign,nonatomic)  position;              //@synthesize position=_position - In the implementation block
+(id)nodeWithPoint:;
-(id)init;
-(id)description;
-(void)setPosition:;
-()position;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGraphNode2D*)cGraphNode2D;
-(void)deleteCGraphNode;
-(id)initWithPoint:;
-(GKCGraphNode*)makeCGraphNode;
@end

