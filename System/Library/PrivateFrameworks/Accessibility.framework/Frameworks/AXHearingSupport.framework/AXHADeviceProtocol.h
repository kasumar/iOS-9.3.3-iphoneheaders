/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSMutableArray, NSDate, NSArray, AXHearingAidMode;


@protocol AXHADeviceProtocol <NSObject>
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) BOOL isConnecting; 
@property (assign,nonatomic) BOOL keepInSync; 
@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSMutableArray * manufacturer; 
@property (nonatomic,retain,readonly) NSMutableArray * model; 
@property (nonatomic,retain,readonly) NSString * leftFirmwareVersion; 
@property (nonatomic,retain,readonly) NSString * rightFirmwareVersion; 
@property (nonatomic,retain,readonly) NSString * leftHardwareVersion; 
@property (nonatomic,retain,readonly) NSString * rightHardwareVersion; 
@property (assign,nonatomic) int availableEars; 
@property (nonatomic,retain,readonly) NSString * rightUUID; 
@property (nonatomic,retain,readonly) NSString * leftUUID; 
@property (nonatomic,retain,readonly) NSString * leftPeripheralUUID; 
@property (nonatomic,retain,readonly) NSString * rightPeripheralUUID; 
@property (assign,nonatomic) double rightMicrophoneVolume; 
@property (assign,nonatomic) double leftMicrophoneVolume; 
@property (assign,nonatomic) double rightStreamVolume; 
@property (assign,nonatomic) double leftStreamVolume; 
@property (assign,nonatomic) double rightSensitivity; 
@property (assign,nonatomic) double leftSensitivity; 
@property (nonatomic,readonly) double rightBatteryLevel; 
@property (nonatomic,readonly) double leftBatteryLevel; 
@property (nonatomic,retain,readonly) NSDate * leftBatteryLowDate; 
@property (nonatomic,retain,readonly) NSDate * rightBatteryLowDate; 
@property (nonatomic,readonly) short leftMicrophoneVolumeSteps; 
@property (nonatomic,readonly) short rightMicrophoneVolumeSteps; 
@property (nonatomic,readonly) short leftStreamVolumeSteps; 
@property (nonatomic,readonly) short rightStreamVolumeSteps; 
@property (nonatomic,readonly) short leftSensitivitySteps; 
@property (nonatomic,readonly) short rightSensitivitySteps; 
@property (nonatomic,readonly) BOOL supportsBinauralStreaming; 
@property (nonatomic,readonly) BOOL supportsCombinedPresets; 
@property (nonatomic,readonly) BOOL supportsCombinedVolumes; 
@property (nonatomic,copy,readonly) NSArray * rightPrograms; 
@property (nonatomic,copy,readonly) NSArray * leftPrograms; 
@property (nonatomic,retain,readonly) AXHearingAidMode * leftSelectedProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * rightSelectedProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * leftSelectedStreamingProgram; 
@property (nonatomic,retain,readonly) AXHearingAidMode * rightSelectedStreamingProgram; 
@property (nonatomic,retain,readonly) NSString * deviceUUID; 
@required
-(NSString *)name;
-(NSMutableArray *)model;
-(void)connect;
-(id)valueForProperty:(unsigned long long)arg1;
-(NSMutableArray *)manufacturer;
-(void)setValue:(id)arg1 forProperty:(unsigned long long)arg2;
-(BOOL)isConnecting;
-(BOOL)leftAvailable;
-(BOOL)rightAvailable;
-(double)leftBatteryLevel;
-(double)rightBatteryLevel;
-(void)setAvailableEars:(int)arg1;
-(NSString *)leftUUID;
-(NSString *)rightUUID;
-(int)availableEars;
-(BOOL)supportsCombinedPresets;
-(NSArray *)leftPrograms;
-(NSArray *)rightPrograms;
-(AXHearingAidMode *)leftSelectedProgram;
-(AXHearingAidMode *)leftSelectedStreamingProgram;
-(AXHearingAidMode *)rightSelectedProgram;
-(AXHearingAidMode *)rightSelectedStreamingProgram;
-(id)programs;
-(BOOL)didLoadRequiredProperties;
-(void)loadRequiredProperties;
-(double)leftMicrophoneVolume;
-(double)rightMicrophoneVolume;
-(double)leftStreamVolume;
-(double)rightStreamVolume;
-(NSString *)leftFirmwareVersion;
-(NSString *)rightFirmwareVersion;
-(NSString *)leftHardwareVersion;
-(NSString *)rightHardwareVersion;
-(NSDate *)leftBatteryLowDate;
-(NSDate *)rightBatteryLowDate;
-(short)leftSensitivitySteps;
-(short)rightSensitivitySteps;
-(short)leftMicrophoneVolumeSteps;
-(short)leftStreamVolumeSteps;
-(short)rightStreamVolumeSteps;
-(double)leftSensitivity;
-(double)rightSensitivity;
-(BOOL)supportsCombinedVolumes;
-(BOOL)supportsBinauralStreaming;
-(id)initWithPersistentRepresentation:(id)arg1;
-(void)disconnectAndUnpair:(BOOL)arg1;
-(BOOL)hasConnection;
-(BOOL)containsPeripheralWithUUID:(id)arg1;
-(BOOL)didLoadBasicProperties;
-(void)selectProgram:(id)arg1;
-(id)selectedPrograms;
-(id)selectedProgramIndexes;
-(BOOL)keepInSync;
-(void)setKeepInSync:(BOOL)arg1;
-(NSString *)leftPeripheralUUID;
-(NSString *)rightPeripheralUUID;
-(void)setRightMicrophoneVolume:(double)arg1;
-(void)setLeftMicrophoneVolume:(double)arg1;
-(void)setRightStreamVolume:(double)arg1;
-(void)setLeftStreamVolume:(double)arg1;
-(void)setRightSensitivity:(double)arg1;
-(void)setLeftSensitivity:(double)arg1;
-(short)rightMicrophoneVolumeSteps;
-(BOOL)isConnected;
-(NSString *)deviceUUID;
-(BOOL)isPaired;

@end

