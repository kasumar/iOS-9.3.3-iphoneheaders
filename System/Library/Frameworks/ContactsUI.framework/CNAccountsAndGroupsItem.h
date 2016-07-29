/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CNAccountsAndGroupsItem : NSObject {

	BOOL _selected;
	BOOL _bypassIfUnique;
	BOOL _soloSelect;
	NSString* _name;
	long long _type;
	/*^block*/id _nameProvider;
	NSString* _identifier;
	long long _containerType;
	NSArray* _childItems;
	CNAccountsAndGroupsItem* _parentItem;

}

@property (nonatomic,retain) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                          //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) long long type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) id nameProvider;                                            //@synthesize nameProvider=_nameProvider - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long containerType;                                  //@synthesize containerType=_containerType - In the implementation block
@property (nonatomic,retain) NSArray * childItems;                                     //@synthesize childItems=_childItems - In the implementation block
@property (assign,nonatomic,__weak) CNAccountsAndGroupsItem * parentItem;              //@synthesize parentItem=_parentItem - In the implementation block
@property (assign,nonatomic) BOOL bypassIfUnique;                                      //@synthesize bypassIfUnique=_bypassIfUnique - In the implementation block
@property (assign,nonatomic) BOOL soloSelect;                                          //@synthesize soloSelect=_soloSelect - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_setSelected:(BOOL)arg1 ;
-(long long)localizedCompare:(id)arg1 ;
-(void)setParentItem:(CNAccountsAndGroupsItem *)arg1 ;
-(BOOL)soloSelect;
-(BOOL)bypassIfUnique;
-(id)arrayForDisplay:(BOOL)arg1 ;
-(id)nameProvider;
-(void)setNameProvider:(id)arg1 ;
-(CNAccountsAndGroupsItem *)parentItem;
-(void)setBypassIfUnique:(BOOL)arg1 ;
-(void)setSoloSelect:(BOOL)arg1 ;
-(void)setContainerType:(long long)arg1 ;
-(long long)containerType;
-(NSArray *)childItems;
-(void)setChildItems:(NSArray *)arg1 ;
@end

