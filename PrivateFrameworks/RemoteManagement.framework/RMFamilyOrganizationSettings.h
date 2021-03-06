/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMFamilyOrganizationSettings : RMCoreOrganizationSettings

@property (nonatomic) bool isDirty;
@property (nonatomic) bool isManaged;
@property (nonatomic, retain) RMFamilyOrganization *organization;
@property (nonatomic, copy) NSString *passcode;
@property (nonatomic) bool shareWebUsage;
@property (nonatomic, copy) NSData *versionVector;

- (id)computeUniqueIdentifier;
- (id)dictionaryRepresentation;
- (void)didChangeValueForKey:(id)arg1;
- (void)setIsManaged:(bool)arg1;
- (void)setPasscode:(id)arg1;
- (bool)updateWithDictionaryRepresentation:(id)arg1;

@end
