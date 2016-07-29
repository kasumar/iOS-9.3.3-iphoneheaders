/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSData, NSString;

@interface IDSSocketPairMessage : NSObject {

	NSData* _underlyingData;
	unsigned char _command;
	id<NSObject> _context;
	NSString* _topic;
	BOOL _useDynamicServiceName;
	BOOL _cancelled;

}

@property (nonatomic,readonly) unsigned char command;                                //@synthesize command=_command - In the implementation block
@property (nonatomic,retain,readonly) NSData * underlyingData;                       //@synthesize underlyingData=_underlyingData - In the implementation block
@property (nonatomic,readonly) unsigned long long underlyingDataLength; 
@property (nonatomic,retain) id<NSObject> context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * topic;                                       //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) BOOL useDynamicServiceName;                             //@synthesize useDynamicServiceName=_useDynamicServiceName - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                         //@synthesize cancelled=_cancelled - In the implementation block
+(unsigned)headerDataSize;
+(id)messageWithCommand:(unsigned char)arg1 data:(id)arg2 ;
+(unsigned)dataLengthFromHeaderData:(id)arg1 ;
+(id)messageWithHeaderData:(id)arg1 data:(id)arg2 ;
+(id)messageWithData:(id)arg1 ;
-(void)dealloc;
-(id<NSObject>)context;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setContext:(id<NSObject>)arg1 ;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(NSData *)underlyingData;
-(id)_nonHeaderData;
-(unsigned long long)underlyingDataLength;
-(id)_existingUnderlyingData;
-(BOOL)useDynamicServiceName;
-(void)setUseDynamicServiceName:(BOOL)arg1 ;
-(unsigned char)command;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
@end

