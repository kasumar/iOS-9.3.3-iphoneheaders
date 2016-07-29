/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryCenter/BatteryCenter-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary, UIImage;

@interface BCBatteryDevice : NSObject <NSCopying, NSCoding> {

	NSString* _identifier;
	NSString* _matchIdentifier;
	long long _percentCharge;
	BOOL _charging;
	NSDictionary* _glyphs;
	BOOL _connected;
	BOOL _lowBattery;
	BOOL _internal;
	BOOL _powerSource;
	BOOL _fake;
	long long _vendor;
	long long _powerSourceState;
	long long _productIdentifier;
	NSString* _name;
	unsigned long long _parts;
	NSString* _groupName;
	NSString* _baseIdentifier;
	long long _transportType;

}

@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long vendor;                                 //@synthesize vendor=_vendor - In the implementation block
@property (assign,nonatomic) long long powerSourceState;                         //@synthesize powerSourceState=_powerSourceState - In the implementation block
@property (nonatomic,readonly) long long productIdentifier;                      //@synthesize productIdentifier=_productIdentifier - In the implementation block
@property (nonatomic,retain,readonly) UIImage * glyph; 
@property (nonatomic,copy) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) long long percentCharge;                            //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isConnected,nonatomic) BOOL connected;                  //@synthesize connected=_connected - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                    //@synthesize charging=_charging - In the implementation block
@property (assign,getter=isLowBattery,nonatomic) BOOL lowBattery;                //@synthesize lowBattery=_lowBattery - In the implementation block
@property (assign,getter=isInternal,nonatomic) BOOL internal;                    //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isPowerSource,nonatomic) BOOL powerSource;              //@synthesize powerSource=_powerSource - In the implementation block
@property (assign,nonatomic) unsigned long long parts;                           //@synthesize parts=_parts - In the implementation block
@property (nonatomic,copy) NSString * groupName;                                 //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy,readonly) NSString * matchIdentifier;                  //@synthesize matchIdentifier=_matchIdentifier - In the implementation block
@property (nonatomic,copy) NSString * baseIdentifier;                            //@synthesize baseIdentifier=_baseIdentifier - In the implementation block
@property (assign,nonatomic) long long transportType;                            //@synthesize transportType=_transportType - In the implementation block
@property (assign,getter=isFake,nonatomic) BOOL fake;                            //@synthesize fake=_fake - In the implementation block
+(id)batteryDeviceWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 baseIdentifier:(id)arg4 parts:(unsigned long long)arg5 matchIdentifier:(id)arg6 ;
-(NSString *)baseIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(void)setPowerSource:(BOOL)arg1 ;
-(long long)transportType;
-(void)setTransportType:(long long)arg1 ;
-(BOOL)isInternal;
-(void)setConnected:(BOOL)arg1 ;
-(void)setInternal:(BOOL)arg1 ;
-(long long)productIdentifier;
-(UIImage *)glyph;
-(long long)vendor;
-(NSString *)matchIdentifier;
-(long long)percentCharge;
-(void)setParts:(unsigned long long)arg1 ;
-(void)setPowerSourceState:(long long)arg1 ;
-(void)setPercentCharge:(long long)arg1 ;
-(void)setLowBattery:(BOOL)arg1 ;
-(void)setCharging:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 vendor:(long long)arg2 productIdentifier:(long long)arg3 baseIdentifier:(id)arg4 parts:(unsigned long long)arg5 matchIdentifier:(id)arg6 ;
-(id)_lazyGlyphs;
-(void)setFake:(BOOL)arg1 ;
-(id)glyphForPartKey:(id)arg1 ;
-(long long)powerSourceState;
-(BOOL)isCharging;
-(BOOL)isLowBattery;
-(BOOL)isPowerSource;
-(void)setBaseIdentifier:(NSString *)arg1 ;
-(BOOL)isFake;
-(BOOL)isConnected;
-(unsigned long long)parts;
@end

