/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OCDDelayedMediaContext.h>

@class NSString;

@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {

	SsrwOOStream* mStream;
	unsigned mStreamID;
	unsigned mStartOffset;
	unsigned mByteCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)dataRep;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 stream:(SsrwOOStream*)arg3 streamID:(unsigned)arg4 ;
-(BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
-(SsrwOOStream*)stream;
@end

