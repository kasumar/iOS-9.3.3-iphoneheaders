/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFUUDecoder : MFBaseFilterDataConsumer {

	unsigned long long _begin;
	unsigned long long _end;
	unsigned long long _length;
	unsigned long long _readBytes;
	unsigned char _encoded[4];
	BOOL _beginComplete;
	BOOL _dataComplete;
	BOOL _validLength;
	BOOL _lineComplete;
	BOOL _passthrough;

}
-(void)done;
-(long long)appendData:(id)arg1 ;
@end

