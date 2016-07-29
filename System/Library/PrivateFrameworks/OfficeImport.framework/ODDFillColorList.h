/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface ODDFillColorList : NSObject {

	NSArray* mColors;
	int mHueDirection;
	int mMethod;

}
-(id)cycleColorAtIndex:(unsigned long long)arg1 ;
-(id)repeatColorAtIndex:(unsigned long long)arg1 ;
-(id)spanColorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(void)getComponentsForIndex:(unsigned long long)arg1 hue:(float*)arg2 saturation:(float*)arg3 brightness:(float*)arg4 state:(id)arg5 ;
-(void)setColors:(id)arg1 ;
-(void)dealloc;
-(id)colorAtIndex:(unsigned long long)arg1 count:(unsigned long long)arg2 state:(id)arg3 ;
-(void)setHueDirection:(int)arg1 ;
-(void)setMethod:(int)arg1 ;
@end

