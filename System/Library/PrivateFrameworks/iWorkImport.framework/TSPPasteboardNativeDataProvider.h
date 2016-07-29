/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPPasteboardWriting.h>

@class TSPPasteboard, NSMutableDictionary, NSString;

@interface TSPPasteboardNativeDataProvider : NSObject <TSPPasteboardWriting> {

	TSPPasteboard* _pasteboard;
	NSMutableDictionary* _nativeData;
	NSMutableDictionary* _tspData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)writableTypesForPasteboard:(id)arg1 ;
-(id)pasteboardPropertyListForType:(id)arg1 ;
-(id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3 ;
-(void)loadNativeData;
@end

