/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:46 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GQZArchiveInputStream;
#import <iWorkImport/iWorkImport-Structs.h>
@interface GQZEntry : NSObject {

	id<GQZArchiveInputStream> mInput;
	int mCompressionMethod;
	unsigned long long mCompressedSize;
	unsigned long long mUncompressedSize;
	unsigned long long mOffset;
	unsigned mCrc;

}
-(id)initFromCentralFileHeader:(const char*)arg1 inputStream:(id)arg2 ;
-(xmlDoc*)recoverXmlDocument;
-(xmlTextReaderRef)xmlReader:(BOOL)arg1 ;
-(void)dealloc;
-(id)data;
-(xmlDoc*)xmlDocument;
-(id)inputStream;
-(void)readZip64ExtraField:(const char*)arg1 size:(unsigned long long)arg2 ;
@end

