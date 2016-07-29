/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:47 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, NSCondition;

@interface TSUDateParserLibrary : NSObject {

	unsigned long long mMaxPermittedParsers;
	unsigned long long mNumberOfUses;
	unsigned long long mParsersCreated;
	NSMutableArray* mAvailableDateParsers;
	NSCondition* mParserLibraryConditionVariable;

}
+(id)sharedDateParserLibrary;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)checkoutDateParser;
-(void)returnDateParser:(id)arg1 ;
@end

