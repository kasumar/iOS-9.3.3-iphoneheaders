/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTStrokeLayerAbstractStack.h>

@class TSTStrokeLayer, TSTMutableStrokeLayer;

@interface TSTStrokeLayerStack : TSTStrokeLayerAbstractStack {

	TSTStrokeLayer* _defaultStrokeLayer;
	TSTStrokeLayer* _customStrokeLayer;
	TSTMutableStrokeLayer* _clearedStrokeLayer;
	TSTMutableStrokeLayer* _dynamicStrokeLayer;
	TSTMutableStrokeLayer* _spillStrokeLayer;
	long long _stackKind;
	long long _type;

}

@property (nonatomic,retain) TSTStrokeLayer * defaultStrokeLayer;                     //@synthesize defaultStrokeLayer=_defaultStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTStrokeLayer * customStrokeLayer;                      //@synthesize customStrokeLayer=_customStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTMutableStrokeLayer * clearedStrokeLayer;              //@synthesize clearedStrokeLayer=_clearedStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTMutableStrokeLayer * dynamicStrokeLayer;              //@synthesize dynamicStrokeLayer=_dynamicStrokeLayer - In the implementation block
@property (nonatomic,retain) TSTMutableStrokeLayer * spillStrokeLayer;                //@synthesize spillStrokeLayer=_spillStrokeLayer - In the implementation block
@property (assign,nonatomic) long long stackKind;                                     //@synthesize stackKind=_stackKind - In the implementation block
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
+(id)strokeLayerStackWithStackKind:(long long)arg1 ;
-(id)strokeLayerEnumeration;
-(id)portalledStrokeLayer;
-(id)initWithStackKind:(long long)arg1 ;
-(TSTStrokeLayer *)defaultStrokeLayer;
-(TSTMutableStrokeLayer *)clearedStrokeLayer;
-(void)setClearedStrokeLayer:(TSTMutableStrokeLayer *)arg1 ;
-(TSTMutableStrokeLayer *)dynamicStrokeLayer;
-(void)setDynamicStrokeLayer:(TSTMutableStrokeLayer *)arg1 ;
-(TSTMutableStrokeLayer *)spillStrokeLayer;
-(void)setSpillStrokeLayer:(TSTMutableStrokeLayer *)arg1 ;
-(void)setDefaultStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(TSTStrokeLayer *)customStrokeLayer;
-(void)setCustomStrokeLayer:(TSTStrokeLayer *)arg1 ;
-(void)insertClearedStrokeAtRange:(TSTSimpleRange)arg1 ;
-(void)insertDynamicStroke:(id)arg1 strokeOrder:(int)arg2 atRange:(TSTSimpleRange)arg3 ;
-(void)insertSpillStroke:(id)arg1 atRange:(TSTSimpleRange)arg2 ;
-(BOOL)replaceDefaultStrokeLayerWith:(id)arg1 ;
-(BOOL)replaceCustomStrokeLayerWith:(id)arg1 ;
-(BOOL)replaceDynamicStrokeLayerWith:(id)arg1 ;
-(void)invalidateCustomStrokes;
-(void)invalidateClearedStrokesInRange:(TSTSimpleRange)arg1 ;
-(void)invalidateDynamicStrokes;
-(void)invalidateDynamicStrokesInRange:(TSTSimpleRange)arg1 ;
-(void)invalidateSpillStrokes;
-(long long)stackKind;
-(void)setStackKind:(long long)arg1 ;
-(void)dealloc;
-(void)setType:(long long)arg1 ;
-(long long)type;
@end

