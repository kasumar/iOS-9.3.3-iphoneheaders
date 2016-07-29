/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:45 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarFoundation/CalLogFormatter.h>

@class NSDateFormatter, NSString;

@interface CalLogBasicTextFormatter : NSObject <CalLogFormatter> {

	BOOL _includeFunction;
	BOOL _includeLevel;
	BOOL _includeLogName;
	BOOL _includeMessage;
	BOOL _includeProcessID;
	BOOL _includeProcessName;
	BOOL _includeMachPort;
	BOOL _includeTimestamp;
	BOOL _includeEnvelopePartNames;
	BOOL _useTinyEnvelopePartNames;
	BOOL _useCompactForm;
	BOOL _usePrettyTimestamp;
	NSDateFormatter* _dateFormatter;

}

@property (assign,nonatomic) BOOL includeFunction;                         //@synthesize includeFunction=_includeFunction - In the implementation block
@property (assign,nonatomic) BOOL includeLevel;                            //@synthesize includeLevel=_includeLevel - In the implementation block
@property (assign,nonatomic) BOOL includeLogName;                          //@synthesize includeLogName=_includeLogName - In the implementation block
@property (assign,nonatomic) BOOL includeMessage;                          //@synthesize includeMessage=_includeMessage - In the implementation block
@property (assign,nonatomic) BOOL includeProcessID;                        //@synthesize includeProcessID=_includeProcessID - In the implementation block
@property (assign,nonatomic) BOOL includeProcessName;                      //@synthesize includeProcessName=_includeProcessName - In the implementation block
@property (assign,nonatomic) BOOL includeMachPort;                         //@synthesize includeMachPort=_includeMachPort - In the implementation block
@property (assign,nonatomic) BOOL includeTimestamp;                        //@synthesize includeTimestamp=_includeTimestamp - In the implementation block
@property (assign,nonatomic) BOOL includeEnvelopePartNames;                //@synthesize includeEnvelopePartNames=_includeEnvelopePartNames - In the implementation block
@property (assign,nonatomic) BOOL useTinyEnvelopePartNames;                //@synthesize useTinyEnvelopePartNames=_useTinyEnvelopePartNames - In the implementation block
@property (assign,nonatomic) BOOL useCompactForm;                          //@synthesize useCompactForm=_useCompactForm - In the implementation block
@property (assign,nonatomic) BOOL usePrettyTimestamp;                      //@synthesize usePrettyTimestamp=_usePrettyTimestamp - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)newFormattedString:(id)arg1 ;
-(BOOL)includeEnvelopePartNames;
-(BOOL)useTinyEnvelopePartNames;
-(BOOL)useCompactForm;
-(BOOL)includeTimestamp;
-(BOOL)usePrettyTimestamp;
-(BOOL)includeLogName;
-(BOOL)includeLevel;
-(BOOL)includeProcessName;
-(BOOL)includeProcessID;
-(BOOL)includeMachPort;
-(BOOL)includeFunction;
-(BOOL)includeMessage;
-(void)setIncludeFunction:(BOOL)arg1 ;
-(void)setIncludeLevel:(BOOL)arg1 ;
-(void)setIncludeLogName:(BOOL)arg1 ;
-(void)setIncludeMessage:(BOOL)arg1 ;
-(void)setIncludeProcessID:(BOOL)arg1 ;
-(void)setIncludeProcessName:(BOOL)arg1 ;
-(void)setIncludeMachPort:(BOOL)arg1 ;
-(void)setIncludeTimestamp:(BOOL)arg1 ;
-(void)setIncludeEnvelopePartNames:(BOOL)arg1 ;
-(void)setUseTinyEnvelopePartNames:(BOOL)arg1 ;
-(void)setUseCompactForm:(BOOL)arg1 ;
-(void)setUsePrettyTimestamp:(BOOL)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)dateFormatter;
@end

