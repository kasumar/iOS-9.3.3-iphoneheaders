/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:11 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRCInterface.h>

@protocol IRInterfaceDelegate;
@class NSArray;

@interface IRInterface : CoreRCInterface {

	BOOL _isTxInterface;
	BOOL _isRxInterface;
	id<IRInterfaceDelegate> _delegate;

}

@property (assign,nonatomic) id<IRInterfaceDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isTxInterface;                                  //@synthesize isTxInterface=_isTxInterface - In the implementation block
@property (assign,nonatomic) BOOL isRxInterface;                                  //@synthesize isRxInterface=_isRxInterface - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,readonly) unsigned long long maxStoredCommands; 
-(void)setDelegate:(id<IRInterfaceDelegate>)arg1 ;
-(id<IRInterfaceDelegate>)delegate;
-(NSArray *)buttons;
-(BOOL)isTxInterface;
-(BOOL)isRxInterface;
-(void)receivedFrame:(id)arg1 ;
-(BOOL)clearAllStoredCommands:(id*)arg1 ;
-(BOOL)enableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(BOOL)disableButtonCombination:(id)arg1 delay:(double)arg2 error:(id*)arg3 ;
-(BOOL)transmitCommand:(id)arg1 pressDuration:(double)arg2 error:(id*)arg3 ;
-(BOOL)setCommand:(id)arg1 forButtonCombination:(id)arg2 delay:(double)arg3 error:(id*)arg4 ;
-(BOOL)processSubframe:(unsigned*)arg1 start:(int)arg2 count:(int)arg3 timestamp:(unsigned long long)arg4 ;
-(void)receivedCommand:(id)arg1 ;
-(void)receivedHIDEvent:(id)arg1 ;
-(unsigned long long)maxStoredCommands;
-(BOOL)transmitFrame:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetAllButtons:(id*)arg1 ;
-(void)setIsTxInterface:(BOOL)arg1 ;
-(void)setIsRxInterface:(BOOL)arg1 ;
@end

