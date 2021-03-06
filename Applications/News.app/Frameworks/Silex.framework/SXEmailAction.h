/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXAction.h>

@class NSString;

@interface SXEmailAction : SXAction {

	NSString* _recipient;
	NSString* _subject;

}

@property (nonatomic,readonly) NSString * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) NSString * subject;                //@synthesize subject=_subject - In the implementation block
-(Class)handlerClass;
-(id)initWithSubject:(id)arg1 recipient:(id)arg2 addition:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)subject;
-(id)initWithAddition:(id)arg1 ;
-(NSString *)recipient;
@end

