/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:29 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/ChatKitAssistant.assistantBundle/ChatKitAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AFSyncHandler.h>

@class NSString, NSMutableArray;

@interface CKAssistantSyncHandler : NSObject <AFSyncHandler> {

	NSString* _finalAnchor;
	NSMutableArray* _postAnchors;
	NSMutableArray* _domainObjects;

}

@property (nonatomic,copy) NSString * finalAnchor;                        //@synthesize finalAnchor=_finalAnchor - In the implementation block
@property (nonatomic,retain) NSMutableArray * postAnchors;                //@synthesize postAnchors=_postAnchors - In the implementation block
@property (nonatomic,retain) NSMutableArray * domainObjects;              //@synthesize domainObjects=_domainObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)syncDidEnd;
-(void)setFinalAnchor:(NSString *)arg1 ;
-(void)setPostAnchors:(NSMutableArray *)arg1 ;
-(NSMutableArray *)postAnchors;
-(NSString *)finalAnchor;
-(id)identifierForChatIdentifier:(id)arg1 ;
-(void)dealloc;
-(NSMutableArray *)domainObjects;
-(void)setDomainObjects:(NSMutableArray *)arg1 ;
@end

