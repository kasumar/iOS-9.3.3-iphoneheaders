/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:57 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardPerson.h>

@class NSString, NSArray, NSDictionary, NSData, NSDateComponents, CNContact;

@interface CNContactVCardWritingAdapter : NSObject <CNVCardPerson> {

	CNContact* _contact;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * firstName; 
@property (readonly) NSString * lastName; 
@property (readonly) NSString * middleName; 
@property (readonly) NSString * title; 
@property (readonly) NSString * suffix; 
@property (readonly) NSString * companyName; 
@property (readonly) BOOL isCompany; 
@property (readonly) NSString * nickname; 
@property (readonly) NSString * maidenName; 
@property (readonly) NSString * phoneticFirstName; 
@property (readonly) NSString * phoneticMiddleName; 
@property (readonly) NSString * phoneticLastName; 
@property (readonly) NSString * pronunciationFirstName; 
@property (readonly) NSString * pronunciationLastName; 
@property (readonly) NSString * organization; 
@property (readonly) NSString * department; 
@property (readonly) NSString * jobTitle; 
@property (readonly) BOOL isMe; 
@property (readonly) int nameOrder; 
@property (readonly) NSArray * emailAddresses; 
@property (readonly) NSArray * phoneNumbers; 
@property (readonly) NSArray * postalAddresses; 
@property (readonly) NSArray * socialProfiles; 
@property (readonly) NSArray * instantMessagingAddresses; 
@property (readonly) NSArray * urls; 
@property (readonly) NSArray * calendarURIs; 
@property (readonly) NSDictionary * activityAlerts; 
@property (readonly) NSArray * imageReferences; 
@property (readonly) NSDictionary * imageCropRects; 
@property (readonly) NSDictionary * largeImageCropRects; 
@property (readonly) NSData * largeImageData; 
@property (readonly) NSData * imageData; 
@property (readonly) NSDateComponents * birthdayComponents; 
@property (readonly) NSDateComponents * alternateBirthdayComponents; 
@property (readonly) NSArray * otherDateComponents; 
@property (readonly) NSArray * relatedNames; 
@property (readonly) NSString * note; 
@property (readonly) NSArray * namesOfParentGroups; 
@property (readonly) NSString * cardDAVUID; 
@property (readonly) NSString * uid; 
@property (readonly) NSString * phonemeData; 
@property (readonly) NSArray * unknownProperties; 
+(id)adapterWithContact:(id)arg1 ;
+(id)descriptorForAllSupportedKeys;
-(NSString *)middleName;
-(NSString *)organization;
-(void)dealloc;
-(NSString *)title;
-(NSString *)uid;
-(NSArray *)phoneNumbers;
-(NSArray *)urls;
-(BOOL)isMe;
-(NSString *)phoneticMiddleName;
-(id)vCardPropertyItemsForProperty:(id)arg1 ;
-(id)vCardPropertyItemsForProperty:(id)arg1 valueTransform:(/*^block*/id)arg2 ;
-(NSDictionary *)activityAlerts;
-(NSString *)cardDAVUID;
-(id)jpegImageDataOfAllowableKinds:(id)arg1 maximumLength:(unsigned long long)arg2 cropRects:(id*)arg3 ;
-(id)largeImageHashOfType:(id)arg1 ;
-(NSString *)maidenName;
-(NSString *)phoneticFirstName;
-(NSString *)phoneticLastName;
-(NSString *)pronunciationFirstName;
-(NSString *)pronunciationLastName;
-(NSArray *)instantMessagingAddresses;
-(NSArray *)calendarURIs;
-(NSArray *)imageReferences;
-(NSDictionary *)imageCropRects;
-(NSDictionary *)largeImageCropRects;
-(NSData *)largeImageData;
-(NSDateComponents *)birthdayComponents;
-(NSDateComponents *)alternateBirthdayComponents;
-(NSArray *)otherDateComponents;
-(NSArray *)namesOfParentGroups;
-(NSArray *)unknownProperties;
-(NSString *)companyName;
-(NSString *)phonemeData;
-(NSArray *)relatedNames;
-(NSArray *)socialProfiles;
-(NSString *)jobTitle;
-(int)nameOrder;
-(id)initWithContact:(id)arg1 ;
-(NSArray *)postalAddresses;
-(BOOL)isCompany;
-(NSString *)department;
-(NSString *)nickname;
-(NSData *)imageData;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSArray *)emailAddresses;
-(NSString *)note;
-(NSString *)suffix;
@end

