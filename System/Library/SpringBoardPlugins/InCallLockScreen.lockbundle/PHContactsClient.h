/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:05 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore;

@interface PHContactsClient : NSObject {

	CNContactStore* _contactStore;

}

@property (retain) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
+(id)contactsClient;
-(id)avatarContactFromAddressBookRecord:(void*)arg1 ;
-(id)init;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

