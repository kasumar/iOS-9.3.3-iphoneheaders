/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UIKBHandwritingPointFIFO : NSObject {

	UIKBHandwritingPointFIFO* _nextFIFO;

}

@property (nonatomic,retain) UIKBHandwritingPointFIFO * nextFIFO;              //@synthesize nextFIFO=_nextFIFO - In the implementation block
-(void)dealloc;
-(void)flush;
-(void)addPoint:(SCD_Struct_UI70)arg1 ;
-(void)clear;
-(id)initWithFIFO:(id)arg1 ;
-(void)setNextFIFO:(UIKBHandwritingPointFIFO *)arg1 ;
-(UIKBHandwritingPointFIFO *)nextFIFO;
-(void)emitPoint:(SCD_Struct_UI70)arg1 ;
@end

