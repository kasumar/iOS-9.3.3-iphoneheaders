/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSCHStyleOwnerUUIDDecoder : NSObject {

	unsigned char mUUID[16];
	unsigned long long mIndex;

}
+(id)UUIDDecoderWithUUID:(id)arg1 ;
-(BOOL)p_hasSpaceToDecodeNumberOfBytes:(unsigned long long)arg1 ;
-(unsigned long long)decodeNSUIntegerFromUInt64;
-(void)endDecode;
-(unsigned long long)decodeUInt64;
-(unsigned char)decodeByte;
-(id)initWithUUID:(id)arg1 ;
@end

