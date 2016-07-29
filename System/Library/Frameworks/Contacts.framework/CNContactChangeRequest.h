/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNContactChangeRequest : NSObject {

	NSArray* _contacts;
	long long _kind;

}

@property (nonatomic,copy,readonly) NSArray * contacts;                        //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactIdentifiers; 
@property (nonatomic,readonly) long long kind;                                 //@synthesize kind=_kind - In the implementation block
+(id)contactChangeRequestWithKind:(long long)arg1 contacts:(id)arg2 ;
-(void)dealloc;
-(long long)kind;
-(id)initWithKind:(long long)arg1 contacts:(id)arg2 ;
-(NSArray *)contactIdentifiers;
-(NSArray *)contacts;
@end

