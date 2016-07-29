/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ondemandd/ondemandd-Structs.h>
@class NSString;

@interface ODRPreallocatedFile : NSObject {

	fstore _fStore;
	int _fileDescriptor;
	NSString* _path;

}

@property (readonly) NSString * path;                 //@synthesize path=_path - In the implementation block
@property (readonly) long long size; 
@property (readonly) int fileDescriptor;              //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
-(id)initWithPath:(id)arg1 flags:(int)arg2 size:(long long)arg3 ;
-(id)initForSpaceReduction:(long long)arg1 ;
-(long long)size;
-(void)dealloc;
-(NSString *)path;
-(int)fileDescriptor;
@end
