/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:30 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AXFileLogger : NSObject {

	NSString* _filePath;
	NSString* _facility;

}

@property (nonatomic,copy) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) NSString * facility;              //@synthesize facility=_facility - In the implementation block
+(id)fileLoggerWithFacility:(id)arg1 ;
+(id)logDirectory;
+(id)defaultFileLogger;
-(void)dealloc;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(id)initWithFacility:(id)arg1 ;
-(void)log:(id)arg1 ;
-(NSString *)facility;
-(void)setFacility:(NSString *)arg1 ;
@end

