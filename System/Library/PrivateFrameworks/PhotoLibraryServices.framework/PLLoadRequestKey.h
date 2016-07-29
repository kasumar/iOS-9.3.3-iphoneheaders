/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID;

@interface PLLoadRequestKey : NSObject <NSCopying> {

	unsigned short _sourceID;
	NSManagedObjectID* _objectID;
	unsigned long long _hash;

}
+(id)keyWithSource:(id)arg1 asset:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

