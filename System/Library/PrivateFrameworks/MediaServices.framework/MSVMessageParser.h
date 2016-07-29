/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSVMessageParserDelegate;
@class NSMutableData;

@interface MSVMessageParser : NSObject {

	id<MSVMessageParserDelegate> _delegate;
	NSMutableData* _unhandledPartialObjectData;
	long long _unhandledObjectDataExpectedLength;

}

@property (assign,nonatomic,__weak) id<MSVMessageParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableData * unhandledPartialObjectData;                //@synthesize unhandledPartialObjectData=_unhandledPartialObjectData - In the implementation block
@property (assign,nonatomic) long long unhandledObjectDataExpectedLength;               //@synthesize unhandledObjectDataExpectedLength=_unhandledObjectDataExpectedLength - In the implementation block
+(id)createHeader:(unsigned long long)arg1 ;
-(void)setDelegate:(id<MSVMessageParserDelegate>)arg1 ;
-(id<MSVMessageParserDelegate>)delegate;
-(void)_notifyDelegate:(id)arg1 ;
-(void)setUnhandledPartialObjectData:(NSMutableData *)arg1 ;
-(void)setUnhandledObjectDataExpectedLength:(long long)arg1 ;
-(NSMutableData *)unhandledPartialObjectData;
-(long long)unhandledObjectDataExpectedLength;
-(void)processData:(id)arg1 ;
@end

