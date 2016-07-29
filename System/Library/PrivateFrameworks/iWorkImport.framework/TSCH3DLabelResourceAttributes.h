/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSWPParagraphStyle, NSString, TSCH3DLabelBitmapContextInfo;

@interface TSCH3DLabelResourceAttributes : NSObject <NSCopying> {

	TSWPParagraphStyle* mParagraphStyle;
	NSString* mString;
	TSCH3DLabelBitmapContextInfo* mBitmapContextInfo;
	double mLabelWidth;
	double mRenderSamples;

}

@property (nonatomic,readonly) TSWPParagraphStyle * paragraphStyle; 
@property (nonatomic,readonly) NSString * string; 
@property (nonatomic,readonly) TSCH3DLabelBitmapContextInfo * bitmapContextInfo; 
@property (nonatomic,readonly) double labelWidth; 
@property (nonatomic,readonly) double renderSamples; 
+(id)labelAttributesWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5 ;
-(TSCH3DLabelBitmapContextInfo *)bitmapContextInfo;
-(double)renderSamples;
-(id)initWithParagraphStyle:(id)arg1 string:(id)arg2 bitmapContextInfo:(id)arg3 labelWidth:(double)arg4 renderSamples:(double)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(TSWPParagraphStyle *)paragraphStyle;
-(double)labelWidth;
@end

