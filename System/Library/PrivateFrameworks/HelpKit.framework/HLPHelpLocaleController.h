/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:44 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPRemoteDataController.h>

@class NSURL, NSArray;

@interface HLPHelpLocaleController : HLPRemoteDataController {

	NSURL* _helpBookURL;
	NSArray* _locales;

}

@property (nonatomic,retain) NSArray * locales;              //@synthesize locales=_locales - In the implementation block
-(id)currentLocale;
-(id)initWithURL:(id)arg1 ;
-(NSArray *)locales;
-(void)setLocales:(NSArray *)arg1 ;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
@end

