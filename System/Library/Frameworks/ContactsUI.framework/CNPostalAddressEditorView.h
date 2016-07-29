/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:10:00 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/CNCountryPickerControllerDelegate.h>
#import <libobjc.A.dylib/ABText.h>

@protocol CNPresenterDelegate;
@class NSString, NSDictionary, CNMutablePostalAddress, CNPostalAddressEditorTableView, NSArray, NSMutableDictionary, CNPostalAddress, UIColor;

@interface CNPostalAddressEditorView : UIControl <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, CNCountryPickerControllerDelegate, ABText> {

	CNMutablePostalAddress* _address;
	NSDictionary* _valueTextAttributes;
	id<CNPresenterDelegate> _delegate;
	CNPostalAddressEditorTableView* _tableView;
	NSDictionary* _addressFormats;
	NSArray* _cellsLayout;
	NSMutableDictionary* _textFields;

}

@property (nonatomic,copy) CNPostalAddress * address; 
@property (nonatomic,copy) UIColor * separatorColor; 
@property (nonatomic,readonly) long long lineCount; 
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNPostalAddressEditorTableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSDictionary * addressFormats;                             //@synthesize addressFormats=_addressFormats - In the implementation block
@property (nonatomic,copy) NSArray * cellsLayout;                                     //@synthesize cellsLayout=_cellsLayout - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * textFields;                          //@synthesize textFields=_textFields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * ab_text; 
@property (nonatomic,copy) NSDictionary * ab_textAttributes; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setDelegate:(id<CNPresenterDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<CNPresenterDelegate>)delegate;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setEnabled:(BOOL)arg1 ;
-(void)layoutMarginsDidChange;
-(BOOL)canBecomeFirstResponder;
-(CNPostalAddressEditorTableView *)tableView;
-(UIColor *)separatorColor;
-(void)setTableView:(CNPostalAddressEditorTableView *)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(NSMutableDictionary *)textFields;
-(void)setAddress:(CNPostalAddress *)arg1 ;
-(void)setAb_textAttributes:(NSDictionary *)arg1 ;
-(void)setAb_text:(NSString *)arg1 ;
-(id)_countryCode;
-(void)countryPickerDidCancel:(id)arg1 ;
-(void)countryPicker:(id)arg1 didPickCountryCode:(id)arg2 ;
-(NSArray *)cellsLayout;
-(void)_invalidateCellsLayout;
-(void)setCellsLayout:(NSArray *)arg1 ;
-(id)_cellsLayoutForCountryCode:(id)arg1 ;
-(void)_setAddressValue:(id)arg1 forKey:(id)arg2 ;
-(long long)lineCount;
-(id)_addressValueForKey:(id)arg1 ;
-(id)_addressPlaceholderForKey:(id)arg1 ;
-(void)textFieldChanged:(id)arg1 ;
-(id)_normalizeCountryCodeToISO:(id)arg1 ;
-(NSDictionary *)addressFormats;
-(NSString *)ab_text;
-(NSDictionary *)ab_textAttributes;
-(void)setAddressFormats:(NSDictionary *)arg1 ;
-(void)setTextFields:(NSMutableDictionary *)arg1 ;
-(CNPostalAddress *)address;
@end

