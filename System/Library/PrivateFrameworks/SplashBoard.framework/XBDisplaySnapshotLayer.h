/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SplashBoard/SplashBoard-Structs.h>
@interface XBDisplaySnapshotLayer : NSObject {

	unsigned _contextID;
	CATransform3D _baseTransform;

}

@property (assign,nonatomic) unsigned contextID;                       //@synthesize contextID=_contextID - In the implementation block
@property (assign,nonatomic) CATransform3D baseTransform;              //@synthesize baseTransform=_baseTransform - In the implementation block
+(id)layerWithContextID:(unsigned)arg1 baseTransform:(CATransform3D)arg2 ;
-(unsigned)contextID;
-(void)setContextID:(unsigned)arg1 ;
-(id)initWithContextID:(unsigned)arg1 baseTransform:(CATransform3D)arg2 ;
-(CATransform3D)baseTransform;
-(void)setBaseTransform:(CATransform3D)arg1 ;
@end

