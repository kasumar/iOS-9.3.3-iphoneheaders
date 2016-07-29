/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SymbolInfo;

@interface BinaryImageSegment : NSObject {

	int _source;
	SymbolInfo* _symbolInfo;
	unsigned long long _used_index;

}

@property (nonatomic,readonly) SymbolInfo * symbolInfo;              //@synthesize symbolInfo=_symbolInfo - In the implementation block
@property (assign) int source;                                       //@synthesize source=_source - In the implementation block
@property (assign) unsigned long long used_index;                    //@synthesize used_index=_used_index - In the implementation block
-(id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 for:(unsigned char)arg3 ;
-(SymbolInfo *)symbolInfo;
-(id)initWithSymbol:(id)arg1 ;
-(unsigned long long)used_index;
-(void)setUsed_index:(unsigned long long)arg1 ;
-(void)setSource:(int)arg1 ;
-(int)source;
-(id)details;
@end

