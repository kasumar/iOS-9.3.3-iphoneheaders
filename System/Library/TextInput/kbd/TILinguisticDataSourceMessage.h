/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:15:09 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol TILinguisticDataSourceMessage <NSObject>
@property (nonatomic,copy,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSString * recipient; 
@property (nonatomic,copy,readonly) NSString * body; 
@property (nonatomic,readonly) BOOL fromMe; 
@optional
-(BOOL)fromMe;

@required
-(NSString *)body;
-(NSDate *)dateSent;
-(NSString *)recipient;

@end

