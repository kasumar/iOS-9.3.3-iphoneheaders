/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:07 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding> {

	int _statusBarStyleOverrides;
	int _pid;
	BOOL _exclusive;
	BOOL _showsWhenForeground;
	NSString* _statusString;
	NSString* _uniqueIdentifier;

}

@property (assign,nonatomic) int statusBarStyleOverrides;                    //@synthesize statusBarStyleOverrides=_statusBarStyleOverrides - In the implementation block
@property (assign,nonatomic) int pid;                                        //@synthesize pid=_pid - In the implementation block
@property (assign,getter=isExclusive,nonatomic) BOOL exclusive;              //@synthesize exclusive=_exclusive - In the implementation block
@property (assign,nonatomic) BOOL showsWhenForeground;                       //@synthesize showsWhenForeground=_showsWhenForeground - In the implementation block
@property (nonatomic,copy) NSString * statusString;                          //@synthesize statusString=_statusString - In the implementation block
@property (nonatomic,copy) NSString * uniqueIdentifier;                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(int)statusBarStyleOverrides;
-(BOOL)showsWhenForeground;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 uniqueIdentifier:(id)arg5 ;
-(void)setStatusBarStyleOverrides:(int)arg1 ;
-(void)setShowsWhenForeground:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)uniqueIdentifier;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)statusString;
-(void)setPid:(int)arg1 ;
-(int)pid;
-(void)setStatusString:(NSString *)arg1 ;
-(id)initWithStatusBarStyleOverrides:(int)arg1 forPID:(int)arg2 exclusive:(BOOL)arg3 showsWhenForeground:(BOOL)arg4 ;
-(void)setExclusive:(BOOL)arg1 ;
-(BOOL)isExclusive;
@end

