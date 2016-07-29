/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface PKLocation : NSObject <NSSecureCoding> {

	NSNumber* _latitude;
	NSNumber* _longitude;
	NSNumber* _maxDistance;
	NSNumber* _altitude;
	NSString* _name;
	NSString* _relevantText;

}

@property (nonatomic,retain) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * relevantText;              //@synthesize relevantText=_relevantText - In the implementation block
@property (nonatomic,readonly) CGSize coordinate; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)hasAltitude;
-(double)altitude;
-(void)setAltitude:(id)arg1 ;
-(void)setLatitude:(id)arg1 ;
-(void)setLongitude:(id)arg1 ;
-(CGSize)coordinate;
-(double)latitude;
-(double)longitude;
-(void)setRelevantText:(NSString *)arg1 ;
-(NSString *)relevantText;
-(void)setMaxDistance:(id)arg1 ;
-(double)maxDistance;
-(BOOL)hasEqualCoordinatesToLocation:(id)arg1 ;
-(id)CLLocation;
@end

