/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/NanoAppSync.assistantBundle/NanoAppSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoAppSync/NanoAppSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface NASAppSyncAnchor : NSObject <NSCopying, NSCoding> {

	unsigned long long _mainIndex;
	unsigned long long _subIndex;
	long long _stringOnce;
	NSString* _stringRepresentation;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation; 
+(id)anchorFromStringRepresentation:(id)arg1 ;
+(id)anchorFromStringRepresentation:(id)arg1 error:(id*)arg2 ;
+(BOOL)isValidStringRepresentation:(id)arg1 withMainIndex:(unsigned long long*)arg2 subIndex:(unsigned long long*)arg3 ;
-(BOOL)isOlderThanAnchor:(id)arg1 ;
-(id)_initWithMainIndex:(unsigned long long)arg1 subIndex:(unsigned long long)arg2 ;
-(BOOL)isNewerThanAnchor:(id)arg1 ;
-(BOOL)isEqualToAnchor:(id)arg1 ;
-(id)primitiveAnchor;
-(BOOL)isPrimitiveAnchor;
-(id)anchorByIncrementingSubIndex;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringRepresentation;
@end

