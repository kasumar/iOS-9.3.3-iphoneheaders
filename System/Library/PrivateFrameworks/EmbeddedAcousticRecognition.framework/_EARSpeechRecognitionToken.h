/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:20 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying> {

	Token _token;

}

@property (nonatomic,copy,readonly) NSString * tokenName; 
@property (nonatomic,readonly) double start; 
@property (nonatomic,readonly) double end; 
@property (nonatomic,readonly) double silenceStart; 
@property (nonatomic,readonly) double confidence; 
@property (nonatomic,readonly) BOOL hasSpaceAfter; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)start;
-(double)end;
-(double)confidence;
-(id)_initWithQuasarToken:(const Token*)arg1 ;
-(BOOL)hasSpaceAfter;
-(double)silenceStart;
-(NSString *)tokenName;
@end

