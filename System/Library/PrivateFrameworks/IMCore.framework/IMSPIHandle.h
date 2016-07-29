/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:50 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMSPIHandle : NSObject {

	NSString* _address;
	NSString* _displayName;
	NSString* _identifier;
	NSString* _cnContactID;

}

@property (retain) NSString * address;                  //@synthesize address=_address - In the implementation block
@property (retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * cnContactID;              //@synthesize cnContactID=_cnContactID - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setAddress:(NSString *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)cnContactID;
-(void)setCnContactID:(NSString *)arg1 ;
-(NSString *)address;
@end

