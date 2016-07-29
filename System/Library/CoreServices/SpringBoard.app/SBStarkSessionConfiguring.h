/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVExternalDevice, FBSDisplay, UIScreen, UITraitCollection, NSSet;


@protocol SBStarkSessionConfiguring <NSObject>
@property (nonatomic,readonly) AVExternalDevice * device; 
@property (nonatomic,readonly) unsigned long long interactionAffordances; 
@property (nonatomic,readonly) long long layoutJustification; 
@property (nonatomic,readonly) FBSDisplay * display; 
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) double screenScale; 
@property (nonatomic,copy,readonly) UITraitCollection * traitCollection; 
@property (getter=isACBackSupported,nonatomic,readonly) BOOL acBackSupported; 
@property (getter=isAmbientBrightnessNighttime,nonatomic,readonly) BOOL ambientBrightnessNighttime; 
@property (getter=isConnectedWirelessly,nonatomic,readonly) BOOL connectedWirelessly; 
@property (getter=isGeoSupported,nonatomic,readonly) BOOL geoSupported; 
@property (getter=isKnownVehicle,nonatomic,readonly) BOOL knownVehicle; 
@property (getter=isOEMIconVisible,nonatomic,readonly) BOOL OEMIconVisible; 
@property (getter=isPairedVehicle,nonatomic,readonly) BOOL pairedVehicle; 
@property (nonatomic,copy,readonly) NSSet * sessionProtocols; 
@required
-(BOOL)isPairedVehicle;
-(NSSet *)sessionProtocols;
-(BOOL)isGeoSupported;
-(unsigned long long)interactionAffordances;
-(long long)layoutJustification;
-(BOOL)isACBackSupported;
-(BOOL)isAmbientBrightnessNighttime;
-(BOOL)isKnownVehicle;
-(BOOL)isOEMIconVisible;
-(UITraitCollection *)traitCollection;
-(UIScreen *)screen;
-(FBSDisplay *)display;
-(double)screenScale;
-(BOOL)isConnectedWirelessly;
-(AVExternalDevice *)device;

@end

