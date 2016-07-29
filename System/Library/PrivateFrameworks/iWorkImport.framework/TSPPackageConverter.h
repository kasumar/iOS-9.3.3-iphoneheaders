/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPFileCoordinatorDelegate;
@class TSPPackage, NSURL;

@interface TSPPackageConverter : NSObject {

	id<TSPFileCoordinatorDelegate> _fileCoordinatorDelegate;
	BOOL _isCancelled;
	TSPPackage* _package;
	NSURL* _URL;

}

@property (nonatomic,readonly) long long packageType; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL isPasswordProtected; 
@property (nonatomic,readonly) TSPPackage * package;                  //@synthesize package=_package - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                      //@synthesize isCancelled=_isCancelled - In the implementation block
+(id)newPackageConverterWithURL:(id)arg1 ;
+(BOOL)convertDocumentAtURL:(id)arg1 toPackageType:(long long)arg2 error:(id*)arg3 ;
-(long long)packageType;
-(BOOL)checkPassword:(id)arg1 ;
-(BOOL)writeToURL:(id)arg1 packageType:(long long)arg2 error:(id*)arg3 ;
-(id)initWithURL:(id)arg1 package:(id)arg2 fileCoordinatorDelegate:(id)arg3 ;
-(unsigned long long)progressTotalUnitCountWithZipArchive:(id)arg1 ;
-(id)newWriteChannelAtPath:(id)arg1 size:(unsigned long long)arg2 CRC:(unsigned)arg3 packageWriter:(id)arg4 error:(id*)arg5 ;
-(BOOL)enumeratePackageEntriesWithZipArchive:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(BOOL)isDocumentPropertiesPath:(id)arg1 ;
-(BOOL)isObjectArchivePath:(id)arg1 ;
-(id)init;
-(BOOL)isValid;
-(BOOL)isCancelled;
-(NSURL *)URL;
-(BOOL)isPasswordProtected;
-(TSPPackage *)package;
@end

