/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:18 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OADFormula : NSObject {

	int mType;
	OADFormulaArg mArgs[3];
	NSString* mName;

}
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)type;
-(OADFormulaArg)argAtIndex:(unsigned)arg1 ;
-(id)initWithType:(int)arg1 arg0:(OADFormulaArg)arg2 arg1:(OADFormulaArg)arg3 arg2:(OADFormulaArg)arg4 ;
@end

