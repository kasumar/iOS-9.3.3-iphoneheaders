/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:09:59 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CNContactContentViewController.h>
#import <libobjc.A.dylib/CNContactViewHostProtocol.h>

@protocol CNContactViewHostProtocol, NSCopying;
@class NSExtension, NSString;

@interface CNContactViewHostViewController : _UIRemoteViewController <CNContactContentViewController, CNContactViewHostProtocol> {

	id<CNContactViewHostProtocol> _delegate;
	id<NSCopying> _currentRequestIdentifier;
	NSExtension* _extension;

}

@property (nonatomic,retain) id<NSCopying> currentRequestIdentifier;              //@synthesize currentRequestIdentifier=_currentRequestIdentifier - In the implementation block
@property (nonatomic,retain) NSExtension * extension;                             //@synthesize extension=_extension - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<CNContactViewHostProtocol> delegate;                        //@synthesize delegate=_delegate - In the implementation block
+(BOOL)getViewController:(/*^block*/id)arg1 ;
+(id)contactViewExtension;
+(id)contextForIdentifier:(id)arg1 ;
-(void)setDelegate:(id<CNContactViewHostProtocol>)arg1 ;
-(id<CNContactViewHostProtocol>)delegate;
-(void)invalidate;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(BOOL)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3 ;
-(void)updateEditing:(BOOL)arg1 doneButtonEnabled:(BOOL)arg2 doneButtonText:(id)arg3 ;
-(void)didCompleteWithContact:(id)arg1 ;
-(void)didDeleteContact:(id)arg1 ;
-(void)isPresentingFullscreen:(BOOL)arg1 ;
-(void)setupWithOptions:(id)arg1 readyBlock:(/*^block*/id)arg2 ;
-(void)didChangeToEditMode:(BOOL)arg1 ;
-(void)editCancel;
-(void)setCurrentRequestIdentifier:(id<NSCopying>)arg1 ;
-(id<NSCopying>)currentRequestIdentifier;
-(id)protocolContext;
-(void)toggleEditing;
@end

