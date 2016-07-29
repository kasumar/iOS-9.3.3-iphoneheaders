/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:52 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TSCHStyleOwnerReference : NSObject <NSCopying> {

	int mType;
	unsigned long long mIndex;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) Class styleClass; 
@property (nonatomic,readonly) Class nonstyleClass; 
@property (nonatomic,readonly) Class genericPropertyMapClass; 
+(id)styleOwnerReferenceWithType:(int)arg1 index:(unsigned long long)arg2 ;
-(Class)styleClass;
-(Class)nonstyleClass;
-(id)initWithStyleOwnerType:(int)arg1 index:(unsigned long long)arg2 ;
-(Class)genericPropertyMapClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
@end

