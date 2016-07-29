/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:41 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SBLayoutElementViewController;

@interface SBAppResizeElementControllerCacheKey : NSObject <NSCopying> {

	SBLayoutElementViewController* _elementViewController;
	CGSize _elementViewSize;

}

@property (nonatomic,readonly) SBLayoutElementViewController * elementViewController;              //@synthesize elementViewController=_elementViewController - In the implementation block
@property (nonatomic,readonly) CGSize elementViewSize;                                             //@synthesize elementViewSize=_elementViewSize - In the implementation block
-(id)initWithLayoutElementViewController:(id)arg1 ;
-(SBLayoutElementViewController *)elementViewController;
-(CGSize)elementViewSize;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

