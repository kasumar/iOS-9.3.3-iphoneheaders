/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/IMCommonCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface IMBloomFilter : NSObject <NSCoding> {

	/*^block*/id _hashProvider;
	SCD_Struct_IM10 _specification;
	SCD_Struct_IM17 _bitVector;

}

@property (readonly) NSString * usageDescription; 
-(id)initWithSpecification:(SCD_Struct_IM10)arg1 hashProvider:(/*^block*/id)arg2 ;
-(BOOL)mightContainKey:(const void*)arg1 ;
-(long long)indexSize;
-(NSString *)usageDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)addKey:(const void*)arg1 ;
@end

