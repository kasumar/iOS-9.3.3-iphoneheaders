/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary;

@interface CalItemMetadata : NSObject <NSCoding> {

	NSDictionary* _x_props;
	int _classification;

}

@property (retain) NSDictionary * x_props;              //@synthesize x_props=_x_props - In the implementation block
@property (assign) int classification;                  //@synthesize classification=_classification - In the implementation block
+(id)metadataWithICSComponent:(id)arg1 ;
+(id)metadataWithData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setClassification:(int)arg1 ;
-(int)classification;
-(id)dataRepresentationWithExistingMetaData:(id)arg1 ;
-(void)applyToComponent:(id)arg1 ;
-(void)setX_props:(NSDictionary *)arg1 ;
-(id)initWithICSComponent:(id)arg1 ;
-(NSDictionary *)x_props;
@end

