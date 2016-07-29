/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:48 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPFileCoordinatorDelegate.h>

@class NSURL, NSString;

@interface TSPTemporaryFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate> {

	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;                             //@synthesize URL=_URL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
@end

