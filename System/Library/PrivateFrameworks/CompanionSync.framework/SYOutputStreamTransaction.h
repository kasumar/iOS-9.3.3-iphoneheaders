/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:03 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <libobjc.A.dylib/SYStreamTransaction.h>

@class NSDictionary, NSProgress, NSURL, NSOutputStream, NSString;

@interface SYOutputStreamTransaction : NSObject <SYStreamTransaction> {

	NSDictionary* _metadata;
	NSURL* _fileURL;
	NSOutputStream* _stream;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSOutputStream * outputStream;              //@synthesize stream=_stream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSDictionary * metadata;                    //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                      //@synthesize progress=_progress - In the implementation block
-(void)dealloc;
-(long long)type;
-(NSProgress *)progress;
-(NSURL *)fileURL;
-(NSDictionary *)metadata;
-(NSOutputStream *)outputStream;
-(BOOL)prepare:(id*)arg1 ;
-(id)finalizeOutput:(id*)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
@end

