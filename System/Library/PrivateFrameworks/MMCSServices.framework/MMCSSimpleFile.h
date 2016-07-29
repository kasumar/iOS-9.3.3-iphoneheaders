/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:54 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSData;

@interface MMCSSimpleFile : NSObject {

	int _fd;
	double _progress;
	NSString* _authToken;
	long long _encryptionBehavior;
	NSString* _localPath;
	NSURL* _requestURL;
	NSString* _requestorID;
	NSString* _guid;
	unsigned long long _itemID;
	NSData* _signature;
	NSData* _fileHash;
	unsigned long long _protocolFileSize;

}

@property (retain) NSString * guid;                                  //@synthesize guid=_guid - In the implementation block
@property (assign) unsigned long long itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (retain) NSURL * requestURL;                               //@synthesize requestURL=_requestURL - In the implementation block
@property (retain) NSString * requestorID;                           //@synthesize requestorID=_requestorID - In the implementation block
@property (retain) NSData * signature;                               //@synthesize signature=_signature - In the implementation block
@property (retain) NSString * authToken;                             //@synthesize authToken=_authToken - In the implementation block
@property (retain) NSString * localPath;                             //@synthesize localPath=_localPath - In the implementation block
@property (assign) int fd;                                           //@synthesize fd=_fd - In the implementation block
@property (retain) NSData * fileHash;                                //@synthesize fileHash=_fileHash - In the implementation block
@property (assign) unsigned long long protocolFileSize;              //@synthesize protocolFileSize=_protocolFileSize - In the implementation block
@property (assign) double progress;                                  //@synthesize progress=_progress - In the implementation block
@property (assign) long long encryptionBehavior;                     //@synthesize encryptionBehavior=_encryptionBehavior - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setProgress:(double)arg1 ;
-(double)progress;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
-(void)setProtocolFileSize:(unsigned long long)arg1 ;
-(unsigned long long)protocolFileSize;
-(unsigned long long)itemID;
-(NSData *)fileHash;
-(void)setFileHash:(NSData *)arg1 ;
-(NSString *)localPath;
-(NSURL *)requestURL;
-(void)setRequestURL:(NSURL *)arg1 ;
-(int)fd;
-(void)setFd:(int)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(NSData *)signature;
-(void)setItemID:(unsigned long long)arg1 ;
-(void)setRequestorID:(NSString *)arg1 ;
-(long long)encryptionBehavior;
-(void)setLocalPath:(NSString *)arg1 ;
-(void)setEncryptionBehavior:(long long)arg1 ;
-(NSString *)requestorID;
@end

