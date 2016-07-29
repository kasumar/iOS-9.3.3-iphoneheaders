/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:08 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/MessagesBridgeSettings.bundle/MessagesBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NPSManager, NPSDomainAccessor, NSString, NSArray;

@interface CKNanoCannedRepliesStore : NSObject {

	NPSManager* _npsManager;
	NPSDomainAccessor* _domainAccessor;
	NSString* _cachedLanguage;
	NSArray* _cachedCannedReplies;
	NSArray* _cachedCustomReplies;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;              //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,copy) NSString * cachedLanguage;                         //@synthesize cachedLanguage=_cachedLanguage - In the implementation block
@property (nonatomic,retain) NSArray * cachedCannedReplies;                   //@synthesize cachedCannedReplies=_cachedCannedReplies - In the implementation block
@property (nonatomic,retain) NSArray * cachedCustomReplies;                   //@synthesize cachedCustomReplies=_cachedCustomReplies - In the implementation block
+(id)sharedInstance;
-(NSArray *)cachedCustomReplies;
-(void)setCachedCustomReplies:(NSArray *)arg1 ;
-(NSString *)cachedLanguage;
-(void)setCachedLanguage:(NSString *)arg1 ;
-(void)setCachedCannedReplies:(NSArray *)arg1 ;
-(void)clearCannedRepliesCache;
-(NSArray *)cachedCannedReplies;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)customReplies;
-(void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_handleMessagesStoreChanged;
-(id)_defaultRepliesWithFormat:(id)arg1 forLanguage:(id)arg2 ;
-(NPSDomainAccessor *)domainAccessor;
-(id)defaultRepliesForLanguage:(id)arg1 ;
-(id)formalDefaultRepliesForLanguage:(id)arg1 ;
-(id)cannedRepliesForLanguage:(id)arg1 ;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
@end

