/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileHandle;

@interface TSUHTMLLog : NSObject {

	NSString* _path;
	NSString* _title;
	NSString* _stylesheet;
	NSString* _script;
	NSFileHandle* _handle;
	BOOL _logStarted;
	unsigned long long _uniquifier;
	unsigned long long _tableRow;

}

@property (nonatomic,readonly) NSString * path;                //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * stylesheet;              //@synthesize stylesheet=_stylesheet - In the implementation block
@property (nonatomic,copy) NSString * script;                  //@synthesize script=_script - In the implementation block
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)path;
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)clear;
-(NSString *)script;
-(void)setScript:(NSString *)arg1 ;
-(void)logBegin;
-(void)_writeMarkupData:(id)arg1 ;
-(void)writeMarkup:(id)arg1 ;
-(NSString *)stylesheet;
-(id)uniqueIdentifierWithPrefix:(id)arg1 ;
-(void)writeText:(id)arg1 ;
-(void)logEnd;
-(void)openInBrowser;
-(void)setStylesheet:(NSString *)arg1 ;
@end

