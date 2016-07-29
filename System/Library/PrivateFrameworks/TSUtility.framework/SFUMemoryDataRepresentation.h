/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/SFUDataRepresentation.h>

@class NSData;

@interface SFUMemoryDataRepresentation : SFUDataRepresentation {

	NSData* mData;

}
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(long long)dataLength;
-(id)inputStream;
-(id)bufferedInputStream;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
-(BOOL)isReadable;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(unsigned long long)readIntoData:(id)arg1 ;
@end

