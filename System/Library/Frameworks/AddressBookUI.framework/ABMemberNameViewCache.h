/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface ABMemberNameViewCache : NSObject {

	NSCache* _styleProvidersCache;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)memberNameRegularFontForStyleProvider:(id)arg1 ;
-(id)regularTextAttributesForStyleProvider:(id)arg1 ;
-(id)boldTextAttributesForStyleProvider:(id)arg1 ;
-(id)placeholderTextAttributesForStyleProvider:(id)arg1 ;
-(id)_cacheForStyleProvider:(id)arg1 ;
-(id)memberNameBoldFontForStyleProvider:(id)arg1 ;
-(id)memberNamePlaceholderFontForStyleProvider:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
@end

