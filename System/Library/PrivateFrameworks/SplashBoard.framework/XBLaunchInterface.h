/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface XBLaunchInterface : NSObject <BSXPCCoding, NSCoding> {

	BOOL _default;
	unsigned long long _type;
	NSString* _name;
	NSString* _identifier;
	NSArray* _urlSchemes;

}

@property (assign,nonatomic) unsigned long long type;                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * urlSchemes;                         //@synthesize urlSchemes=_urlSchemes - In the implementation block
@property (nonatomic,readonly) BOOL isXIB; 
@property (nonatomic,readonly) BOOL isStoryboard; 
@property (assign,getter=_isDefault,nonatomic) BOOL _default;              //@synthesize default=_default - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 name:(id)arg2 identifier:(id)arg3 urlSchemes:(id)arg4 isDefault:(BOOL)arg5 ;
-(BOOL)isStoryboard;
-(BOOL)isXIB;
-(BOOL)_isDefault;
-(void)set_default:(BOOL)arg1 ;
-(NSArray *)urlSchemes;
-(void)setUrlSchemes:(NSArray *)arg1 ;
@end

