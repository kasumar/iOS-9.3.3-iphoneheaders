/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GQPagesGenerator <NSObject>
@required
+(int)handlePageSetup:(id)arg1 state:(id)arg2;
+(int)handleStylesheet:(id)arg1 state:(id)arg2;
+(int)beginPublication:(id)arg1 state:(id)arg2;
+(int)endPublication:(id)arg1 state:(id)arg2;
+(Class)enterMainDrawablesForPage:(unsigned)arg1 state:(id)arg2;
+(Class)enterBodyStorage:(id)arg1;
+(int)handleHeaders:(CFArrayRef)arg1 state:(id)arg2;
+(int)handleFooters:(CFArrayRef)arg1 state:(id)arg2;
+(int)handleSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3 state:(id)arg4;
+(int)setCurrentPageIndex:(int)arg1 state:(id)arg2;

@end

