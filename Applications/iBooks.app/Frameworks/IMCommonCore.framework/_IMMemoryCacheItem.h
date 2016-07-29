/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:25:12 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _IMMemoryCacheItem : NSObject {

	BOOL _conformsToProtocol;
	NSString* _keyString;
	id _item;
	unsigned long long _cost;
	unsigned long long _timeStamp;

}

@property (nonatomic,retain) id item;                                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned long long cost;                   //@synthesize cost=_cost - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy) NSString * key;                              //@synthesize keyString=_keyString - In the implementation block
@property (assign,nonatomic) BOOL conformsToProtocol;                   //@synthesize conformsToProtocol=_conformsToProtocol - In the implementation block
+(id)cacheItemWithItem:(id)arg1 key:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setCost:(unsigned long long)arg1 ;
-(void)setConformsToProtocol:(BOOL)arg1 ;
-(BOOL)conformsToProtocol;
-(id)description;
-(NSString *)key;
-(id)item;
-(void)setItem:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(unsigned long long)cost;
@end

