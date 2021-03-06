/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:23 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@interface ODRDownload : NSManagedObject
+(void)addDownloadWithIdentifier:(long long)arg1 withSourceURLString:(id)arg2 withDestinationURLString:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(void)deleteDownload:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)deleteDownloads:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)downloadsWithIdentifier:(long long)arg1 ;
+(id)downloadsWithSourceURL:(id)arg1 withDestinationURL:(id)arg2 ;
+(id)allDownloads;
@end

