/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:13 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class NSString;

@interface TTFont : NSObject {

	UIFont* _nativeFont;
	unsigned _fontHints;
	NSString* _fontName;
	double _pointSize;

}

@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double pointSize;                 //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,readonly) unsigned fontHints;               //@synthesize fontHints=_fontHints - In the implementation block
+(UIFont*)convertFont:(UIFont*)arg1 toBold:(BOOL)arg2 toItalic:(BOOL)arg3 ;
+(void)font:(UIFont*)arg1 isBold:(BOOL*)arg2 isItalic:(BOOL*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)pointSize;
-(NSString *)fontName;
-(id)initWithName:(id)arg1 size:(double)arg2 hints:(unsigned)arg3 ;
-(unsigned)fontHints;
-(UIFont*)nativeFontForStyle:(unsigned)arg1 ;
@end

