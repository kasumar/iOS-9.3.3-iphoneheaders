/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ML3DatabaseModuleContext;
#import <MusicLibrary/MusicLibrary-Structs.h>
@class NSString;

@interface ML3DatabaseModule : NSObject {

	NSString* _name;
	sqlite3_module* _moduleMethods;
	id<ML3DatabaseModuleContext> _context;

}

@property (nonatomic,readonly) NSString * name;                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) sqlite3_module* moduleMethods;                   //@synthesize moduleMethods=_moduleMethods - In the implementation block
@property (nonatomic,retain) id<ML3DatabaseModuleContext> context;              //@synthesize context=_context - In the implementation block
-(id)description;
-(NSString *)name;
-(id<ML3DatabaseModuleContext>)context;
-(void)setContext:(id<ML3DatabaseModuleContext>)arg1 ;
-(id)initWithName:(id)arg1 moduleMethods:(sqlite3_module*)arg2 ;
-(sqlite3_module*)moduleMethods;
@end

