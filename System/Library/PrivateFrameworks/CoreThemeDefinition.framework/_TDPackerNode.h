/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface _TDPackerNode : NSObject {

	BOOL _used;
	BOOL _fit;
	_TDPackerNode* _down;
	_TDPackerNode* _right;
	void* _node;
	CGSize _size;
	CGPoint _origin;

}

@property (assign) BOOL used;                          //@synthesize used=_used - In the implementation block
@property (retain) _TDPackerNode * down;               //@synthesize down=_down - In the implementation block
@property (retain) _TDPackerNode * right;              //@synthesize right=_right - In the implementation block
@property (assign) BOOL fit;                           //@synthesize fit=_fit - In the implementation block
@property (assign) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (assign) CGPoint origin;                     //@synthesize origin=_origin - In the implementation block
@property (assign) void* node;                         //@synthesize node=_node - In the implementation block
-(CGSize)size;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void*)node;
-(void)setNode:(void*)arg1 ;
-(void)setDown:(_TDPackerNode *)arg1 ;
-(BOOL)used;
-(void)setUsed:(BOOL)arg1 ;
-(_TDPackerNode *)down;
-(BOOL)fit;
-(void)setFit:(BOOL)arg1 ;
-(_TDPackerNode *)right;
-(void)setRight:(_TDPackerNode *)arg1 ;
@end

