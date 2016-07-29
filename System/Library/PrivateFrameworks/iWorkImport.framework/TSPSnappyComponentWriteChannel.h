/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:49 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPComponentWriteChannel.h>

@protocol TSPComponentWriteChannel;
@class NSString;

@interface TSPSnappyComponentWriteChannel : NSObject <TSPComponentWriteChannel> {

	char* _uncompressedBuffer;
	unsigned long long _uncompressedLength;
	id<TSPComponentWriteChannel> _writeChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWriteChannel:(id)arg1 ;
-(void)writeBlock;
-(void)dealloc;
-(void)close;
-(void)writeData:(id)arg1 ;
@end

