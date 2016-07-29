/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSAttributedString;

@interface MRTextRenderer : NSObject {

	NSAttributedString* _text;
	NSAttributedString* _cachedText;
	NSAttributedString* _placeholderText;
	CGSize _definedSize;
	CGSize _resolution;
	long long _maxNumberOfLines;
	long long _lastGlyphIndex;
	BOOL _truncate;
	BOOL _renderAtDefinedSize;
	double _lineSpacingFactor;
	CGSize _inset;
	double _scale;
	long long _columnCount;
	double _columnMargin;
	double _extraFooter;
	BOOL _centerVertically;
	CGSize _cachedSize;
	CGSize _originalCacheSize;
	CGRect _imageRect;

}

@property (assign,nonatomic) NSAttributedString * text;                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) NSAttributedString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
@property (assign,nonatomic) CGSize resolution;                                 //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) BOOL truncate;                                     //@synthesize truncate=_truncate - In the implementation block
@property (assign,nonatomic) CGSize definedSize;                                //@synthesize definedSize=_definedSize - In the implementation block
@property (assign,nonatomic) BOOL renderAtDefinedSize;                          //@synthesize renderAtDefinedSize=_renderAtDefinedSize - In the implementation block
@property (assign,nonatomic) long long maxNumberOfLines;                        //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (assign,nonatomic) double lineSpacingFactor;                          //@synthesize lineSpacingFactor=_lineSpacingFactor - In the implementation block
@property (assign,nonatomic) CGSize inset;                                      //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long columnCount;                             //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) double columnMargin;                               //@synthesize columnMargin=_columnMargin - In the implementation block
@property (assign,nonatomic) double extraFooter;                                //@synthesize extraFooter=_extraFooter - In the implementation block
@property (assign,nonatomic) BOOL centerVertically;                             //@synthesize centerVertically=_centerVertically - In the implementation block
@property (assign,nonatomic) CGRect imageRect;                                  //@synthesize imageRect=_imageRect - In the implementation block
-(id)_invertRect:(CGRect)arg1 inRect:(CGRect)arg2 ;
-(id)initWithText:(id)arg1 resolution:(CGSize)arg2 ;
-(void)setTruncate:(BOOL)arg1 ;
-(long long)countOfWords;
-(CGSize)sizeOfContext;
-(void)cacheText;
-(CGContextRef)retainedContext;
-(long long)glyphIndexForStringIndex:(long long)arg1 ;
-(void)updateLineSpacing;
-(CGSize)_sizeToRendererAt;
-(id)_truncateTextToFitInSize:(CGSize)arg1 fromCenter:(BOOL)arg2 outSize:(CGSize*)arg3 ;
-(CGContextRef)_retainedContextFromAttributedString:(id)arg1 withSize:(CGSize)arg2 ;
-(CGRect)tightFrameOfLineAtIndex:(long long)arg1 ;
-(CGRect)_tightFrameOfLineAtIndex:(long long)arg1 inString:(id)arg2 withSize:(CGSize)arg3 ;
-(void)_drawInContext:(CGContextRef)arg1 withAttributedString:(id)arg2 withSize:(CGSize)arg3 andScale:(double)arg4 ;
-(double)_strikethroughThinkness:(long long)arg1 baselineOffset:(double)arg2 lineRect:(CGRect)arg3 ;
-(long long)_numberOfLinesInString:(id)arg1 ;
-(long long)_glyphIndexForStringIndex:(long long)arg1 inString:(id)arg2 forSize:(CGSize)arg3 ;
-(SCD_Struct_MR21)rangeOfStringForGlyphIndex:(long long)arg1 ;
-(CGSize)_shadowSizeOffsetForString:(id)arg1 ;
-(long long)maxNumberOfLines;
-(void)setDefinedSize:(CGSize)arg1 ;
-(CGSize)_sizeOfString:(id)arg1 ;
-(CGRect)tightFrameOfAllLines;
-(void)setCenterVertically:(BOOL)arg1 ;
-(CGPoint)originOfWordAtIndex:(long long)arg1 ;
-(CGSize)sizeOfText;
-(id)truncatedText;
-(BOOL)renderAtDefinedSize;
-(double)lineSpacingFactor;
-(void)setExtraFooter:(double)arg1 ;
-(void)setLineSpacingFactor:(double)arg1 ;
-(double)columnMargin;
-(void)setColumnMargin:(double)arg1 ;
-(double)extraFooter;
-(CGRect)_textClipRectForString:(id)arg1 ;
-(void)setRenderAtDefinedSize:(BOOL)arg1 ;
-(long long)countOfGlyphs;
-(CGContextRef)retainedContextOfWordsInRange:(SCD_Struct_MR21)arg1 ;
-(void)squeezeWidthForLineCount:(long long)arg1 ;
-(BOOL)centerVertically;
-(CGRect)frameOfLineWithGlyphAtIndex:(long long)arg1 range:(NSRange*)arg2 ;
-(CGSize)definedSize;
-(SCD_Struct_MR21)rangeOfGlyphsForWordsInRange:(SCD_Struct_MR21)arg1 ;
-(SCD_Struct_MR21)rangeOfGlyphsOnLine:(long long)arg1 ;
-(long long)numberOfLinesForTruncatedText;
-(SCD_Struct_MR21)rangeOfWordsOnLine:(long long)arg1 ;
-(CGPoint)originOfGlyphAtIndex:(long long)arg1 ;
-(void)setMaxNumberOfLines:(long long)arg1 ;
-(CGContextRef)retainedContextOfGlyphAtIndex:(long long)arg1 ;
-(BOOL)truncate;
-(void)setInset:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(double)_scale;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(CGSize)shadowOffset;
-(long long)numberOfLines;
-(long long)columnCount;
-(void)setColumnCount:(long long)arg1 ;
-(void)cleanup;
-(void)clearCache;
-(void)trimWhitespace;
-(CGSize)inset;
-(void)setImageRect:(CGRect)arg1 ;
-(CGRect)imageRect;
-(NSAttributedString *)placeholderText;
-(void)setPlaceholderText:(NSAttributedString *)arg1 ;
-(CGSize)resolution;
-(void)setResolution:(CGSize)arg1 ;
@end

