/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:12:39 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOPersistenceManager : NSObject
+(BOOL)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 atPath:(id)arg3 error:(id*)arg4 ;
+(BOOL)readPhoneNumberMuidMapping:(id*)arg1 uniquePhoneNumbers:(id*)arg2 version:(id*)arg3 atPath:(id)arg4 error:(id*)arg5 ;
+(BOOL)phoneNumberMuidMappingFileExistsAtPath:(id)arg1 ;
+(BOOL)createMuidMappingDirectoryForPath:(id)arg1 WithError:(id*)arg2 ;
+(BOOL)writePhoneNumberMuidMappingForMapping:(id)arg1 uniquePhoneNumbers:(id)arg2 toPath:(id)arg3 error:(id*)arg4 ;
@end

