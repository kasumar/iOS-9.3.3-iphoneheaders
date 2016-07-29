/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:32 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/APFormatter.h>

@class NSCharacterSet, NSString;

@interface MACFormatter : APFormatter {

	NSCharacterSet* _possibleSeparators;
	NSCharacterSet* _possibleSeparatorsInvertedSet;
	NSString* _userPreferredSeparator;

}
+(id)macAddressSet;
+(id)macFormatter;
+(id)sharedMACFormatter;
+(BOOL)parseMACAddress:(const char*)arg1 intoHexString:(char*)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(void)setPossibleSeparators:(id)arg1 ;
-(id)possibleSeparators;
-(void)setPossibleSeparatorsInvertedSet:(id)arg1 ;
-(void)setUserPreferredSeparator:(id)arg1 ;
-(void)removeMACAddressSeparatorsFromString:(id)arg1 ;
-(id)possibleSeparatorsInvertedSet;
-(id)userPreferredSeparator;
@end

