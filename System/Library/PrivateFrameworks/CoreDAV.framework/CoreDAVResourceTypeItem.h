/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:06 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _addressBook;
	CoreDAVItemWithNoChildren* _searchAddressBook;
	CoreDAVItemWithNoChildren* _shared;
	CoreDAVItemWithNoChildren* _principal;
	CoreDAVItemWithNoChildren* _collection;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * bookmarkFolder; 
@property (nonatomic,retain) CoreDAVItemWithNoChildren * bookmarkBarFolder; 
@property (nonatomic,retain) CoreDAVItemWithNoChildren * bookmarkMenuFolder; 
@property (nonatomic,retain) CoreDAVItemWithNoChildren * addressBook;                     //@synthesize addressBook=_addressBook - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * searchAddressBook;               //@synthesize searchAddressBook=_searchAddressBook - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * shared;                          //@synthesize shared=_shared - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * principal;                       //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * collection;                      //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * unauthenticated;                 //@synthesize unauthenticated=_unauthenticated - In the implementation block
@property (nonatomic,readonly) NSSet * stringSet; 
+(id)copyParseRules;
-(CoreDAVItemWithNoChildren *)bookmarkFolder;
-(CoreDAVItemWithNoChildren *)bookmarkBarFolder;
-(CoreDAVItemWithNoChildren *)bookmarkMenuFolder;
-(void)setBookmarkFolder:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setBookmarkBarFolder:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setBookmarkMenuFolder:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)extraChildWithNameSpace:(id)arg1 name:(id)arg2 ;
-(void)setExtraChild:(id)arg1 forNameSpace:(id)arg2 name:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSSet *)stringSet;
-(BOOL)isTypeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setUnauthenticated:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setSearchAddressBook:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setShared:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)addressBook;
-(CoreDAVItemWithNoChildren *)shared;
-(CoreDAVItemWithNoChildren *)collection;
-(void)setCollection:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setAddressBook:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)unauthenticated;
-(CoreDAVItemWithNoChildren *)searchAddressBook;
-(void)setPrincipal:(CoreDAVItemWithNoChildren *)arg1 ;
-(CoreDAVItemWithNoChildren *)principal;
-(void)write:(id)arg1 ;
@end

