/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSLocale;

@interface TSWPTranscriber : NSObject {

	NSString* _displayName;
	NSString* _identifier;
	NSString* _transformIdentifier;
	NSLocale* _romanizationLocale;

}

@property (readonly) NSLocale * romanizationLocale;              //@synthesize romanizationLocale=_romanizationLocale - In the implementation block
+(id)transcriberWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4 ;
-(id)initWithIdentifier:(id)arg1 displayName:(id)arg2 romanizationLocaleID:(id)arg3 transformIdentifier:(id)arg4 ;
-(id)transcribeText:(id)arg1 withLocale:(id)arg2 ;
-(id)transcribeText:(id)arg1 ;
-(NSLocale *)romanizationLocale;
-(void)dealloc;
@end

