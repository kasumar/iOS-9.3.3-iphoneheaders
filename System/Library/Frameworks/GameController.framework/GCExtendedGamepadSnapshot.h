/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCExtendedGamepad.h>

@class NSData;

@interface GCExtendedGamepadSnapshot : GCExtendedGamepad {

	NSData* snapshotData;

}

@property (copy) NSData * snapshotData; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setSnapshotData:(NSData *)arg1 ;
-(id)initWithController:(id)arg1 snapshotData:(id)arg2 ;
-(NSData *)snapshotData;
-(id)initWithSnapshotData:(id)arg1 ;
@end

