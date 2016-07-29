/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:10 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRMediaRemoteSetArtworkMessage, NSData, NSDate, NSString;

@interface NMRMediaRemoteSetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRMediaRemoteSetArtworkMessage* _protobuf;

}

@property (nonatomic,readonly) NSData * jpegArtwork; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (nonatomic,readonly) NSData * originalDigest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 ;
-(id)protobufData;
-(NSDate *)serializationDate;
-(NSData *)originalDigest;
-(id)initWithProtobufData:(id)arg1 ;
-(id)_initWithJPEGArtwork:(id)arg1 originalDigest:(id)arg2 ;
-(NSData *)jpegArtwork;
@end

