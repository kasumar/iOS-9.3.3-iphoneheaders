/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:33 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Restaurants/Restaurants-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UILabel, UIImageView, SiriRestaurantsThumbnailsView;

@interface SiriRestaurantsDetailDescriptionCell : SiriUIContentCollectionViewCell {

	UILabel* _openCloseStatusLabel;
	UILabel* _openHoursLabel;
	UILabel* _priceLabel;
	UILabel* _categoriesLabel;
	UILabel* _dashLabel;
	UIImageView* _applePayImageView;
	SiriRestaurantsThumbnailsView* _thumbsView;

}
+(void)_displayStringsForOperationHours:(id)arg1 width:(double)arg2 outStatusString:(id*)arg3 outHoursString:(id*)arg4 outStatusWithHoursString:(id*)arg5 ;
+(double)heightForParsedOpenHoursInfo:(id)arg1 hasCategories:(BOOL)arg2 hasPriceRange:(BOOL)arg3 hasPhoto:(BOOL)arg4 forWidth:(double)arg5 ;
-(void)_setPriceInfoWithRestaurant:(id)arg1 ;
-(void)_layoutView:(id)arg1 withX:(double)arg2 Y:(double)arg3 maxWidth:(double)arg4 ;
-(void)_setInfoTextWithRestaurant:(id)arg1 operationHours:(id)arg2 ;
-(void)_setCategoriesInfoWithRestaurant:(id)arg1 ;
-(void)_setApplePayLogoWithRestaurant:(id)arg1 ;
-(void)configureWithRestaurant:(id)arg1 operationHours:(id)arg2 ;
-(void)_setPhotos:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

