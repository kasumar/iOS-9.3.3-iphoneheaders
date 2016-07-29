/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSCH3DSelectionPathRenderInfo : NSObject {

	NSString* mString;
	unsigned long long mStyleIndex;
	double mRotation;

}

@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) unsigned long long styleIndex; 
@property (nonatomic,readonly) double rotation; 
+(id)renderInfoWithString:(id)arg1 styleIndex:(unsigned long long)arg2 rotation:(double)arg3 ;
-(id)initWithString:(id)arg1 styleIndex:(unsigned long long)arg2 rotation:(double)arg3 ;
-(void)dealloc;
-(NSString *)string;
-(double)rotation;
-(unsigned long long)styleIndex;
@end

