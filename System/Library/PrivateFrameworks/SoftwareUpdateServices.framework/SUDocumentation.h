/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:14:04 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSNumber, NSMutableDictionary;

@interface SUDocumentation : NSObject <NSSecureCoding, NSCopying> {

	NSURL* _baseDocumentationURL;
	NSString* _releaseNotesSummaryFileName;
	NSString* _releaseNotesFileName;
	NSString* _licenseAgreementFileName;
	NSString* _primaryLanguage;
	NSNumber* _slaVersion;
	NSString* _humanReadableUpdateName;
	NSURL* _releaseNotesSummaryURL;
	NSURL* _releaseNotesURL;
	NSURL* _licenseAgreementURL;
	NSMutableDictionary* _cachedData;

}

@property (nonatomic,retain) NSURL * baseDocumentationURL;                        //@synthesize baseDocumentationURL=_baseDocumentationURL - In the implementation block
@property (nonatomic,retain) NSString * releaseNotesSummaryFileName;              //@synthesize releaseNotesSummaryFileName=_releaseNotesSummaryFileName - In the implementation block
@property (nonatomic,retain) NSString * licenseAgreementFileName;                 //@synthesize licenseAgreementFileName=_licenseAgreementFileName - In the implementation block
@property (nonatomic,retain) NSString * releaseNotesFileName;                     //@synthesize releaseNotesFileName=_releaseNotesFileName - In the implementation block
@property (nonatomic,retain) NSString * primaryLanguage;                          //@synthesize primaryLanguage=_primaryLanguage - In the implementation block
@property (nonatomic,retain) NSNumber * slaVersion;                               //@synthesize slaVersion=_slaVersion - In the implementation block
@property (nonatomic,retain) NSString * humanReadableUpdateName;                  //@synthesize humanReadableUpdateName=_humanReadableUpdateName - In the implementation block
@property (nonatomic,retain) NSURL * releaseNotesSummaryURL;                      //@synthesize releaseNotesSummaryURL=_releaseNotesSummaryURL - In the implementation block
@property (nonatomic,retain) NSURL * releaseNotesURL;                             //@synthesize releaseNotesURL=_releaseNotesURL - In the implementation block
@property (nonatomic,retain) NSURL * licenseAgreementURL;                         //@synthesize licenseAgreementURL=_licenseAgreementURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)primaryLanguage;
-(void)setPrimaryLanguage:(NSString *)arg1 ;
-(id)licenseAgreement;
-(NSNumber *)slaVersion;
-(id)releaseNotes;
-(id)releaseNotesSummary;
-(NSString *)humanReadableUpdateName;
-(void)setBaseDocumentationURL:(NSURL *)arg1 ;
-(void)setReleaseNotesSummaryFileName:(NSString *)arg1 ;
-(void)setReleaseNotesFileName:(NSString *)arg1 ;
-(void)setLicenseAgreementFileName:(NSString *)arg1 ;
-(void)setSlaVersion:(NSNumber *)arg1 ;
-(void)_resetIfNecessary;
-(id)_cachedDocumentationDataForURL:(id)arg1 ;
-(NSURL *)releaseNotesSummaryURL;
-(NSURL *)releaseNotesURL;
-(NSURL *)licenseAgreementURL;
-(void)setLicenseAgreementURL:(NSURL *)arg1 ;
-(void)setReleaseNotesSummaryURL:(NSURL *)arg1 ;
-(void)setReleaseNotesURL:(NSURL *)arg1 ;
-(id)_localizedResourceURLForDocumentationAsset:(id)arg1 resource:(id)arg2 ;
-(id)localizedDocumentationStringFromBundle:(CFBundleRef)arg1 key:(id)arg2 ;
-(void)_clearTransientDocumentationData;
-(id)localizedStringFromBundle:(CFBundleRef)arg1 key:(id)arg2 ;
-(NSString *)releaseNotesSummaryFileName;
-(id)localizedURLFromBundle:(CFBundleRef)arg1 resource:(id)arg2 ;
-(NSString *)releaseNotesFileName;
-(NSString *)licenseAgreementFileName;
-(id)initWithDocumentationURL:(id)arg1 ;
-(BOOL)hasAnyDocumentation;
-(NSURL *)baseDocumentationURL;
-(void)setHumanReadableUpdateName:(NSString *)arg1 ;
@end

