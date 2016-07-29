/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:35 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * systems; 
@property (nonatomic,readonly) unsigned long long systemsCount; 
@property (nonatomic,readonly) NSArray * lines; 
@property (nonatomic,readonly) unsigned long long linesCount; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) BOOL isTransitIncidentsTTLExpired; 
@property (nonatomic,readonly) BOOL hasTransitIncidentComponent; 
@property (nonatomic,readonly) NSString * displayName; 
@required
-(NSString *)displayName;
-(NSArray *)incidents;
-(BOOL)isTransitIncidentsTTLExpired;
-(NSArray *)connections;
-(NSArray *)labelItems;
-(BOOL)hasTransitIncidentComponent;
-(unsigned long long)systemsCount;
-(NSArray *)systems;
-(id)linesForSystem:(id)arg1;
-(unsigned long long)linesCount;
-(NSArray *)lines;

@end

