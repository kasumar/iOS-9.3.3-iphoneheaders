/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSInputStream, PBMessageStreamReader, NSError;

@interface BRCPackageManifestReader : NSEnumerator {

	NSInputStream* _stream;
	PBMessageStreamReader* _reader;
	NSError* _error;

}

@property (assign,nonatomic) Class itemClass; 
-(void)dealloc;
-(id)init;
-(id)nextObject;
-(id)initWithURL:(id)arg1 ;
-(void)done;
-(id)initWithAsset:(id)arg1 ;
-(id)error;
-(Class)itemClass;
-(void)setItemClass:(Class)arg1 ;
-(id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2 ;
-(id)initWithInputStream:(id)arg1 ;
@end

