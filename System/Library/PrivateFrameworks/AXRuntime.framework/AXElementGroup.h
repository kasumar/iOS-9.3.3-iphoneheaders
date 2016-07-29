/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:11:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <CoreFoundation/NSArray.h>
#import <AXRuntime/AXGroupable.h>

@protocol AXElementGroupGenerator;
@class NSArray, NSHashTable, AXElement, NSString;

@interface AXElementGroup : NSArray <AXGroupable> {

	NSArray* _elementStore;
	BOOL _rootGroup;
	int _groupTraits;
	id<AXElementGroupGenerator> _generator;
	NSHashTable* _groupObservers;
	AXElementGroup* _parentGroup;
	AXElement* _elementCommunity;
	NSString* _label;

}

@property (assign,nonatomic) AXElementGroup * parentGroup;                                 //@synthesize parentGroup=_parentGroup - In the implementation block
@property (assign,getter=isRootGroup,nonatomic) BOOL rootGroup;                            //@synthesize rootGroup=_rootGroup - In the implementation block
@property (nonatomic,retain) AXElement * elementCommunity;                                 //@synthesize elementCommunity=_elementCommunity - In the implementation block
@property (nonatomic,readonly) NSString * label;                                           //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) int groupTraits;                                              //@synthesize groupTraits=_groupTraits - In the implementation block
@property (nonatomic,readonly) BOOL canBeGroupedWithOtherGroupables; 
@property (nonatomic,readonly) BOOL canBeReplacedByChildren; 
@property (nonatomic,readonly) BOOL allowsChangingExistingGroupingOfContents; 
@property (nonatomic,readonly) BOOL shouldBeUngrouped; 
@property (nonatomic,readonly) BOOL allowsVisualGroupingOfChildren; 
@property (nonatomic,readonly) unsigned long long numberOfElements; 
@property (assign,nonatomic) id<AXElementGroupGenerator> generator;                        //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSHashTable * groupObservers;                                 //@synthesize groupObservers=_groupObservers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
+(id)groupWithElements:(id)arg1 label:(id)arg2 ;
+(id)groupWithElements:(id)arg1 ;
+(id)groupWithGenerator:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(CGRect)frame;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)lastChild;
-(id)firstChild;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isGroup;
-(void)setParentGroup:(AXElementGroup *)arg1 ;
-(AXElementGroup *)parentGroup;
-(id<AXElementGroupGenerator>)generator;
-(id)descriptionWithLocale:(id)arg1 ;
-(id)initWithGenerator:(id)arg1 ;
-(BOOL)allowsChangingExistingGroupingOfContents;
-(BOOL)canBeReplacedByChildren;
-(BOOL)shouldBeUngrouped;
-(int)groupTraits;
-(void)setGroupTraits:(int)arg1 ;
-(BOOL)isKeyboardContainer;
-(BOOL)allowsVisualGroupingOfChildren;
-(BOOL)canBeGroupedWithOtherGroupables;
-(AXElement *)elementCommunity;
-(void)setElementCommunity:(AXElement *)arg1 ;
-(id)highestAncestorGroup;
-(id)keyboardContainer;
-(BOOL)isKeyboardRow;
-(id)firstChildPassingTest:(/*^block*/id)arg1 ;
-(id)descendantsPassingTest:(/*^block*/id)arg1 ;
-(id)firstDescendantPassingTest:(/*^block*/id)arg1 ;
-(id)nextSiblingOfChild:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)previousSiblingOfChild:(id)arg1 didWrap:(BOOL*)arg2 ;
-(id)groupByRemovingGroupable:(id)arg1 ;
-(void)setRootGroup:(BOOL)arg1 ;
-(id)initWithElements:(id)arg1 label:(id)arg2 ;
-(void)_commonInitWithElements:(id)arg1 label:(id)arg2 generator:(id)arg3 ;
-(void)setGroupObservers:(NSHashTable *)arg1 ;
-(void)unregisterAllGroupObservers;
-(void)_transferStateToGroup:(id)arg1 ;
-(void)_notifyGroupObserversWillTransferStateToGroup:(id)arg1 ;
-(void)_notifyGroupObserversDidTransferStateToGroup:(id)arg1 ;
-(void)_generateGroupsIfNeeded;
-(id)_siblingOfChild:(id)arg1 inDirection:(BOOL)arg2 didWrap:(BOOL*)arg3 ;
-(void)enumerateLeafDescendantsUsingBlock:(/*^block*/id)arg1 ;
-(id)childrenPassingTest:(/*^block*/id)arg1 ;
-(id)ancestorPassingTest:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfElements;
-(NSHashTable *)groupObservers;
-(id)debugFullDescription;
-(id)_debugDescriptionForTraits;
-(id)_debugFullDescriptionWithIndent:(id)arg1 ;
-(id)groupByPrependingGroupable:(id)arg1 ;
-(id)groupByAppendingGroupable:(id)arg1 ;
-(id)groupByReplacingGroupable:(id)arg1 withGroupable:(id)arg2 ;
-(id)firstChildMatchingItem:(id)arg1 ;
-(id)firstDescendantMatchingItem:(id)arg1 ;
-(id)firstLeafDescendant;
-(id)keyboardContainerRows;
-(id)keyboardRow;
-(void)registerGroupObserver:(id)arg1 ;
-(void)unregisterGroupObserver:(id)arg1 ;
-(id)_debugBriefDescription;
-(BOOL)isRootGroup;
-(void)setGenerator:(id<AXElementGroupGenerator>)arg1 ;
@end

