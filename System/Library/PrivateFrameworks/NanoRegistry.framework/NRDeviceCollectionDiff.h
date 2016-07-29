/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary;

@interface NRDeviceCollectionDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffDeviceDiffs;

}

@property (nonatomic,readonly) NSDictionary * diffDeviceDiffs;              //@synthesize diffDeviceDiffs=_diffDeviceDiffs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)diffCollectionDiffForPairingID:(id)arg1 ;
-(id)initWithDeviceCollectionDiffDeviceDiffs:(id)arg1 ;
-(id)allPairingIDs;
-(NSDictionary *)diffDeviceDiffs;
@end

