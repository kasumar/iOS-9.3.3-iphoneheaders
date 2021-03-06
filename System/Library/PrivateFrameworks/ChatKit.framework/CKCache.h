/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:55 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKCache.h>

@protocol CKCache <NSObject>
@required
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1;
-(void)setObject:(id)arg1 forKey:(id)arg2;

@end


@class NSMutableDictionary, NSString;

@interface CKCache : NSObject <CKCache> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
@end

