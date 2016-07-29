/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAnchorElement : DOMHTMLElement

@property (copy) NSString * charset; 
@property (copy) NSString * coords; 
@property (copy) NSString * href; 
@property (copy) NSString * hreflang; 
@property (copy) NSString * name; 
@property (copy) NSString * rel; 
@property (copy) NSString * rev; 
@property (copy) NSString * shape; 
@property (copy) NSString * target; 
@property (copy) NSString * type; 
@property (copy) NSString * accessKey; 
@property (copy,readonly) NSString * hashName; 
@property (copy,readonly) NSString * host; 
@property (copy,readonly) NSString * hostname; 
@property (copy,readonly) NSString * pathname; 
@property (copy,readonly) NSString * port; 
@property (copy,readonly) NSString * protocol; 
@property (copy,readonly) NSString * search; 
@property (copy,readonly) NSString * text; 
@property (copy,readonly) NSURL * absoluteLinkURL; 
-(BOOL)alwaysAttemptToShowTapHighlight;
-(NSString *)charset;
-(void)setCharset:(NSString *)arg1 ;
-(NSString *)coords;
-(void)setCoords:(NSString *)arg1 ;
-(NSString *)hreflang;
-(void)setHreflang:(NSString *)arg1 ;
-(void)setPing:(id)arg1 ;
-(NSString *)rev;
-(void)setRev:(NSString *)arg1 ;
-(NSString *)accessKey;
-(void)setAccessKey:(NSString *)arg1 ;
-(NSString *)hashName;
-(NSString *)pathname;
-(id)relList;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setShape:(NSString *)arg1 ;
-(void)setTarget:(NSString *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)text;
-(NSString *)target;
-(NSString *)host;
-(NSURL *)absoluteLinkURL;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(NSString *)shape;
-(NSString *)port;
-(NSString *)protocol;
-(NSString *)search;
-(NSString *)hostname;
-(id)ping;
@end

