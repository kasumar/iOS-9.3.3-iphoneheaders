/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/SFUBufferedInputStream.h>

@protocol SFUBufferedInputStream <SFUInputStream>
@required
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2;
-(BOOL)seekWithinBufferToOffset:(long long)arg1;

@end


@protocol SFUInputStream;
@class NSString;

@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {

	id<SFUInputStream> mStream;
	char* mBuffer;
	unsigned long long mBufferSize;
	long long mBufferOffset;
	long long mBufferStart;
	long long mBufferEnd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)offset;
-(void)close;
-(id)initWithStream:(id)arg1 bufferSize:(unsigned long long)arg2 ;
-(id)initWithStream:(id)arg1 dataLength:(long long)arg2 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(unsigned long long)readToOwnBuffer:(const char**)arg1 size:(unsigned long long)arg2 ;
-(BOOL)seekWithinBufferToOffset:(long long)arg1 ;
-(BOOL)canSeek;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithStream:(id)arg1 ;
@end
