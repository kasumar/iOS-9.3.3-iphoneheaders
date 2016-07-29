/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:56 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface UIPrintInfo : NSObject <NSCopying, NSCoding> {

	NSString* _printerID;
	NSString* _jobName;
	long long _outputType;
	long long _orientation;
	long long _duplex;
	long long _copies;
	BOOL _scaleUp;
	BOOL _staple;
	BOOL _punch;
	NSString* _pdfPassword;
	NSString* _jobAccountID;

}

@property (nonatomic,copy) NSString * printerID;                   //@synthesize printerID=_printerID - In the implementation block
@property (nonatomic,copy) NSString * jobName;                     //@synthesize jobName=_jobName - In the implementation block
@property (assign,nonatomic) long long outputType;                 //@synthesize outputType=_outputType - In the implementation block
@property (assign,nonatomic) long long orientation;                //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) long long duplex;                     //@synthesize duplex=_duplex - In the implementation block
@property (assign,nonatomic) BOOL scaleUp;                         //@synthesize scaleUp=_scaleUp - In the implementation block
@property (nonatomic,retain) NSString * pdfPassword;               //@synthesize pdfPassword=_pdfPassword - In the implementation block
@property (assign,nonatomic) long long copies;                     //@synthesize copies=_copies - In the implementation block
@property (assign,nonatomic) BOOL staple;                          //@synthesize staple=_staple - In the implementation block
@property (assign,nonatomic) BOOL punch;                           //@synthesize punch=_punch - In the implementation block
@property (nonatomic,retain) NSString * jobAccountID;              //@synthesize jobAccountID=_jobAccountID - In the implementation block
+(id)printInfo;
+(id)printInfoWithDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)jobName;
-(id)dictionaryRepresentation;
-(NSString *)pdfPassword;
-(void)setPdfPassword:(NSString *)arg1 ;
-(void)setJobName:(NSString *)arg1 ;
-(void)setOutputType:(long long)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(void)_updateWithPrinter:(id)arg1 ;
-(id)_createPrintSettingsForPrinter:(id)arg1 ;
-(NSString *)printerID;
-(void)setPrinterID:(NSString *)arg1 ;
-(long long)outputType;
-(long long)duplex;
-(void)setDuplex:(long long)arg1 ;
-(BOOL)scaleUp;
-(void)setScaleUp:(BOOL)arg1 ;
-(long long)copies;
-(void)setCopies:(long long)arg1 ;
-(BOOL)staple;
-(void)setStaple:(BOOL)arg1 ;
-(BOOL)punch;
-(void)setPunch:(BOOL)arg1 ;
-(NSString *)jobAccountID;
-(void)setJobAccountID:(NSString *)arg1 ;
@end

