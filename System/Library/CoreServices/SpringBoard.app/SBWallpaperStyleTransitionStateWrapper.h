/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:40 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBWallpaperStyleTransitionStateWrapper : NSObject {

	SCD_Struct_SB20 _state;

}

@property (assign,nonatomic) SCD_Struct_SB20 state;              //@synthesize state=_state - In the implementation block
+(id)wrapperWithState:(SCD_Struct_SB20)arg1 ;
-(id)description;
-(SCD_Struct_SB20)state;
-(void)setState:(SCD_Struct_SB20)arg1 ;
@end
