/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:58 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNPolicy.h>

@interface CNPermissivePolicy : CNPolicy
+(id)sharedPermissivePolicy;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 label:(id)arg2 ;
-(BOOL)shouldRemoveContact:(id)arg1 ;
-(id)unsupportedAttributesForLableledContactProperty:(id)arg1 ;
-(id)unsupportedKeyPathsForContactProperty:(id)arg1 ;
-(BOOL)shouldSetValue:(id)arg1 ofProperty:(id)arg2 onContact:(id)arg3 replacementValue:(id*)arg4 ;
-(BOOL)isContactPropertySupported:(id)arg1 ;
-(id)supportedLabelsForContactProperty:(id)arg1 ;
-(unsigned long long)maximumCountOfValuesForContactProperty:(id)arg1 ;
-(BOOL)shouldAddContact:(id)arg1 ;
-(BOOL)isReadonly;
@end

