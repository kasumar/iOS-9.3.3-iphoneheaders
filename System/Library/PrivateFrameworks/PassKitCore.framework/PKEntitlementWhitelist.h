/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 2:13:27 AM Japan Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PKEntitlementWhitelist : NSObject {

	BOOL _passesAllAccess;
	BOOL _passesAddSilently;
	BOOL _passPresentationSuppression;
	BOOL _paymentAllAccess;
	BOOL _paymentConfiguration;
	BOOL _paymentPresentation;
	BOOL _inAppPayments;
	BOOL _inAppPaymentsPrivate;
	BOOL _addSilently;
	NSString* _applicationID;
	NSArray* _merchantIdentifiers;
	NSArray* _teamIDs;
	NSArray* _passTypeIDs;

}

@property (readonly) BOOL passesAllAccess;                            //@synthesize passesAllAccess=_passesAllAccess - In the implementation block
@property (readonly) BOOL passesAddSilently;                          //@synthesize passesAddSilently=_passesAddSilently - In the implementation block
@property (readonly) BOOL passPresentationSuppression;                //@synthesize passPresentationSuppression=_passPresentationSuppression - In the implementation block
@property (readonly) BOOL paymentAllAccess;                           //@synthesize paymentAllAccess=_paymentAllAccess - In the implementation block
@property (readonly) BOOL paymentConfiguration;                       //@synthesize paymentConfiguration=_paymentConfiguration - In the implementation block
@property (readonly) BOOL paymentPresentation;                        //@synthesize paymentPresentation=_paymentPresentation - In the implementation block
@property (readonly) BOOL inAppPayments;                              //@synthesize inAppPayments=_inAppPayments - In the implementation block
@property (readonly) BOOL inAppPaymentsPrivate;                       //@synthesize inAppPaymentsPrivate=_inAppPaymentsPrivate - In the implementation block
@property (copy,readonly) NSString * applicationID;                   //@synthesize applicationID=_applicationID - In the implementation block
@property (copy,readonly) NSArray * merchantIdentifiers;              //@synthesize merchantIdentifiers=_merchantIdentifiers - In the implementation block
@property (copy) NSArray * teamIDs;                                   //@synthesize teamIDs=_teamIDs - In the implementation block
@property (copy) NSArray * passTypeIDs;                               //@synthesize passTypeIDs=_passTypeIDs - In the implementation block
@property (readonly) BOOL allAccess; 
@property (assign) BOOL addSilently;                                  //@synthesize addSilently=_addSilently - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSString *)applicationID;
-(void)_probeEntitlementsWithConnection:(id)arg1 ;
-(BOOL)allAccess;
-(BOOL)passesAllAccess;
-(BOOL)passesAddSilently;
-(BOOL)passPresentationSuppression;
-(BOOL)paymentAllAccess;
-(BOOL)paymentConfiguration;
-(BOOL)paymentPresentation;
-(BOOL)inAppPayments;
-(BOOL)inAppPaymentsPrivate;
-(NSArray *)teamIDs;
-(void)setTeamIDs:(NSArray *)arg1 ;
-(NSArray *)passTypeIDs;
-(void)setPassTypeIDs:(NSArray *)arg1 ;
-(BOOL)addSilently;
-(void)setAddSilently:(BOOL)arg1 ;
-(NSArray *)merchantIdentifiers;
-(id)initWithConnection:(id)arg1 ;
@end

