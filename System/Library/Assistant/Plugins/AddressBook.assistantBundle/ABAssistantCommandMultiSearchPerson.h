/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:28 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAABMultiPersonSearch.h>
#import <AddressBook/ABAssistantCommand.h>

@class NSString;

@interface ABAssistantCommandMultiSearchPerson : SAABMultiPersonSearch <ABAssistantCommand> {

	void* _addressBook;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(void)dealloc;
-(id)_validate;
-(id)_perform;
-(void*)addressBook;
-(void)setAddressBook:(void*)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

