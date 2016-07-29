/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:53 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABTabletStyleProvider.h>
#import <libobjc.A.dylib/TKTonePickerStyleProvider.h>
#import <libobjc.A.dylib/TKVibrationPickerStyleProvider.h>

@class UIFont, UIColor, NSString;

@interface ABFaceTimeStyleProvider : ABTabletStyleProvider <TKTonePickerStyleProvider, TKVibrationPickerStyleProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL tonePickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long tonePickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * tonePickerCellTextFont; 
@property (nonatomic,readonly) UIColor * tonePickerCellTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomTonePickerHeaderView; 
@property (nonatomic,readonly) UIFont * tonePickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * tonePickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * tonePickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset tonePickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets tonePickerHeaderTextPaddingInsets; 
@property (nonatomic,readonly) UIColor * tonePickerCustomTableSeparatorColor; 
@property (nonatomic,readonly) long long tonePickerCustomTableSeparatorBackdropOverlayBlendMode; 
@property (nonatomic,readonly) BOOL tonePickerHeaderTextShouldBeUppercase; 
@property (nonatomic,readonly) BOOL vibrationPickerUsesOpaqueBackground; 
@property (nonatomic,readonly) long long vibrationPickerTableViewSeparatorStyle; 
@property (nonatomic,readonly) UIFont * vibrationPickerCellTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellHighlightedTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerCellBackgroundColor; 
@property (nonatomic,readonly) BOOL wantsCustomVibrationPickerHeaderView; 
@property (nonatomic,readonly) UIFont * vibrationPickerHeaderTextFont; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextColor; 
@property (nonatomic,readonly) UIColor * vibrationPickerHeaderTextShadowColor; 
@property (nonatomic,readonly) UIOffset vibrationPickerHeaderTextShadowOffset; 
@property (nonatomic,readonly) UIEdgeInsets vibrationPickerHeaderTextPaddingInsets; 
@property (nonatomic,readonly) UIColor * vibrationPickerCustomTableSeparatorColor; 
@property (nonatomic,readonly) long long vibrationPickerCustomTableSeparatorBackdropOverlayBlendMode; 
@property (nonatomic,readonly) BOOL vibrationPickerHeaderTextShouldBeUppercase; 
-(BOOL)tonePickerUsesOpaqueBackground;
-(long long)tonePickerTableViewSeparatorStyle;
-(UIFont *)tonePickerCellTextFont;
-(UIColor *)tonePickerCellTextColor;
-(id)tonePickerCellSelectedTextColor;
-(UIColor *)tonePickerCellHighlightedTextColor;
-(UIColor *)tonePickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedTonePickerCell:(BOOL)arg1 ;
-(id)newAccessoryDisclosureIndicatorViewForTonePickerCell;
-(BOOL)wantsCustomTonePickerHeaderView;
-(UIFont *)tonePickerHeaderTextFont;
-(UIColor *)tonePickerHeaderTextColor;
-(UIColor *)tonePickerHeaderTextShadowColor;
-(UIOffset)tonePickerHeaderTextShadowOffset;
-(UIEdgeInsets)tonePickerHeaderTextPaddingInsets;
-(BOOL)tonePickerHeaderTextShouldBeUppercase;
-(BOOL)vibrationPickerUsesOpaqueBackground;
-(long long)vibrationPickerTableViewSeparatorStyle;
-(UIFont *)vibrationPickerCellTextFont;
-(UIColor *)vibrationPickerCellTextColor;
-(id)vibrationPickerCellSelectedTextColor;
-(UIColor *)vibrationPickerCellHighlightedTextColor;
-(UIColor *)vibrationPickerCellBackgroundColor;
-(id)newBackgroundViewForSelectedVibrationPickerCell:(BOOL)arg1 ;
-(id)newAccessoryDisclosureIndicatorViewForVibrationPickerCell;
-(BOOL)wantsCustomVibrationPickerHeaderView;
-(UIFont *)vibrationPickerHeaderTextFont;
-(UIColor *)vibrationPickerHeaderTextColor;
-(UIColor *)vibrationPickerHeaderTextShadowColor;
-(UIOffset)vibrationPickerHeaderTextShadowOffset;
-(UIEdgeInsets)vibrationPickerHeaderTextPaddingInsets;
-(BOOL)vibrationPickerHeaderTextShouldBeUppercase;
-(id)groupsTableBackgroundColor;
-(id)cardCellDividerColorVertical:(BOOL)arg1 ;
-(id)groupCellBackgroundColor;
-(id)groupCellTextColor;
-(id)groupHeaderBackgroudColor;
-(id)groupAccountNameColor;
-(BOOL)labelPickerUsesOpaqueBackground;
-(id)personLabelColor;
-(int)abCellStyleForCardTableWhenEditing:(BOOL)arg1 ;
-(id)memberNameSelectedColor;
-(id)cardCellBackgroundColor;
-(id)shadowColorForCellStyle:(int)arg1 ;
-(id)newBackgroundViewForCellStyle:(int)arg1 selected:(BOOL)arg2 ;
-(id)cardClippingImageLabelColor;
-(id)cardClippingImageLabelBevelColor;
-(double)cardPhotoFrameBorderSize;
-(id)memberPhotoMaskImage;
-(id)memberPlaceholderPersonImage;
-(id)memberPhotoOverlayImage;
-(id)memberPlaceholderCompanyImage;
-(int)abCellStyleForMembersTable;
-(long long)separatorStyleForCellStyle:(int)arg1 ;
-(id)separatorColorForCellStyle:(int)arg1 ;
-(BOOL)shouldUsePeoplePickerBarStyle;
-(long long)peoplePickerBarStyle;
-(BOOL)peoplePickerBarStyleIsTranslucent;
-(id)membersIndexTextColor;
-(id)membersIndexTrackingBackgroundColor;
-(id)memberSectionListHeaderImage;
-(void)setIndicatesFaceTimeHistory:(BOOL)arg1 onActionButton:(id)arg2 ;
-(BOOL)shouldUseCardContentProviderWhenAvailable;
-(BOOL)shouldPropagateStylesToPickers;
-(int)abCellStyleForGroupsTablePlain;
-(id)cardTableCellBorderColor;
-(id)personHeaderPasteboardColor;
-(id)personHeaderShadowColor;
-(id)personValueEmphasizedColor;
-(id)personValueImportantColor;
-(id)personActionFont;
-(id)personActionColor;
-(id)editorViewColor;
-(id)membersHeaderBackgroundColor;
-(BOOL)membersSearchBarIsInTableHeader;
-(id)cardLabelTextColor;
-(id)cardActionConferenceIcon;
-(BOOL)cardActionsAllowVoiceFavorites;
-(BOOL)cardActionsAllowFaceTimeFavorites;
-(CGSize)personHeaderShadowOffset;
-(id)membersBackgroundColor;
-(id)cardPhotoMaskImage;
-(id)cardPhotoEditOverlayImage;
-(id)personViewGetFavoritesBadge;
-(id)personViewGetFavoritesBadgeHighlighted;
-(id)cardActionConferenceIconPressed;
-(id)cardValueHighlightedTextColor;
-(id)cardLabelHighlightedTextColor;
-(id)cardLabelEmphasizedHighlightedTextColor;
-(id)cardValueTextColor;
-(id)groupAccountNameShadowColor;
-(long long)cardActionButtonType;
-(id)personActionHighlightedColor;
-(id)personActionShadowColor;
-(CGSize)personActionShadowOffset;
-(id)cardActionButtonBackgroundNormal;
-(id)cardActionButtonBackgroundHighlighted;
-(id)cardCellDividerShadowColorVertical:(BOOL)arg1 ;
-(BOOL)cardSectionDrawsDefaultTopShadow;
-(int)abCellStyleForGroupsTableGrouped;
-(int)abCellStyleForCardTableLinkingUI;
-(id)newAccessoryDisclosureIndicatorForCellStyle:(int)arg1 ;
-(id)newTableFooterViewForCellStyle:(int)arg1 ;
-(double)personViewHeaderImageWidth;
-(double)personViewHeaderImageHeight;
-(id)personLabelHighlightedColor;
-(id)personLabelShadowColor;
-(id)personValueEmphasizedHighlightColor;
-(id)personValueImportantHighlightColor;
-(id)newCardDividerViewVertical:(BOOL)arg1 ;
-(id)cardDeleteButtonImage;
-(id)cardDeleteButtonImagePressed;
-(int)dialogStyleForDeleteConfirmation;
-(BOOL)cardTableShouldRemoveBackgroundView;
-(id)cardHeadlineTextColor;
-(id)cardTaglineTextColor;
-(id)cardHeaderDefaultLabelTextColor;
-(BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;
-(id)cardPlaceholderPersonImage;
-(id)cardPlaceholderCompanyImage;
-(id)cardPhotoBackgroundImage;
-(id)cardPhotoOverlayImage;
-(BOOL)cardPhotoShouldApplyOverlayImageWhenLabelPresent;
-(CGSize)cardPhotoOffset;
-(id)cardPhotoShadowImage;
-(CGSize)cardPhotoShadowOffset;
-(id)cardPhotoEditPlaceholderImage;
-(id)cardPhotoFacebookAttributionImage;
-(id)cardSectionBackgroundColor;
-(id)cardLabelSelectedBackgroundColor;
-(BOOL)cardValueHighlightsWhenTouched;
-(id)cardValueClearButtonImage;
-(BOOL)cardSectionAlwaysWantsHeader;
-(BOOL)cardShouldUseSeparateSectionsForUnknownCardActions;
-(long long)cardCellSelectionStyle;
-(BOOL)cardTableUsesRowFadeAnimation;
-(BOOL)datePickerHasNavigationTitle;
-(id)memberNameTextColor;
-(id)memberNameMeCardTextColor;
-(id)memberNameShadowColor;
-(id)memberNameSelectedShadowColor;
-(id)memberSearchFieldBackgroundColor;
-(long long)membersSelectionStyle;
-(double)membersIndexMaximumHeight;
-(id)membersHeaderContentViewBackgroundColor;
-(id)memberHeaderBackgroundView;
-(id)membersSearchBackgroundColor;
-(id)membersSearchCellBackgroundColor;
-(long long)pickerTransitionStyle;
-(BOOL)shouldDefinePickerTransitionStyle;
-(BOOL)presentModalViewInPopover;
-(BOOL)presentNewContactsControllersInPopover;
-(BOOL)presentDatePickerInPopover;
-(BOOL)groupsTableShouldRemoveBackgroundView;
-(id)groupCellHighlightedTextColor;
-(id)groupCellShadowColor;
-(long long)groupCellSelectionStyle;
-(id)_accessoryDisclosureIndicatorImage;
-(id)_accessoryDisclosureIndicatorImageShadowed;
-(id)_accessoryDisclosureIndicatorHighlightedImage;
-(id)_accessoryDisclosureIndicatorHighlightedImageShadowed;
-(long long)headerViewBorderStyle;
-(BOOL)cardCellLooksDifferentWhenEditing;
-(BOOL)cardTableViewUsesDistinctSectionHeaderFooterHeights;
@end

