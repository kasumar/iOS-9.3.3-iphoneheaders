/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:38 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <AssistantServices/AFDataCompressor.h>

@interface AFZlibDataCompressor : AFDataCompressor {

	z_stream_s* _deflateStream;
	unsigned char _deflateBuffer[8192];

}
-(void)dealloc;
-(id)init;
-(id)compressedDataForData:(id)arg1 error:(id*)arg2 ;
@end

