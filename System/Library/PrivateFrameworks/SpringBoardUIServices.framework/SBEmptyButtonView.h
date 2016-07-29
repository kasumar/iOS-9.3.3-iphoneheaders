/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/TPNumberPadButtonProtocol.h>

@class NSString;

@interface SBEmptyButtonView : UIView <TPNumberPadButtonProtocol> {

	unsigned _char;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned character;                              //@synthesize char=_char - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initForCharacter:(unsigned)arg1 ;
-(unsigned)character;
-(void)setCharacter:(unsigned)arg1 ;
@end

