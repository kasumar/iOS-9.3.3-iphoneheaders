/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:19 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface SFUCryptor : NSObject {

	int mOperation;
	CCCryptorRef mCryptor;
	unsigned long long mBlockSize;
	BOOL mFinished;
	char* mDecryptionInputBuffer;
	char* mOutputBuffer;
	char* mOutputBufferPos;
	unsigned long long mOutputBufferAvailable;

}
-(void)dealloc;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long long)arg4 usePKCS7Padding:(BOOL)arg5 ;
-(BOOL)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 crc32:(unsigned*)arg5 error:(id*)arg6 ;
-(id)initWithKey:(id)arg1 operation:(int)arg2 iv:(const char*)arg3 ivLength:(unsigned long long)arg4 ;
-(BOOL)cryptDataFromBuffer:(const char*)arg1 length:(unsigned long long)arg2 toStream:(id)arg3 finished:(BOOL)arg4 error:(id*)arg5 ;
-(BOOL)cryptDataFromStream:(id)arg1 toBuffer:(char*)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5 ;
@end

