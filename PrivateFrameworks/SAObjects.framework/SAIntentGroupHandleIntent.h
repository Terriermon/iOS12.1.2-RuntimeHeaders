/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupHandleIntent : SABaseClientBoundCommand

@property (nonatomic) bool allowsPunchOut;
@property (nonatomic, retain) SAIntentGroupProtobufMessage *intent;

+ (id)handleIntent;
+ (id)handleIntentWithDictionary:(id)arg1 context:(id)arg2;

- (bool)allowsPunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)intent;
- (bool)requiresResponse;
- (void)setAllowsPunchOut:(bool)arg1;
- (void)setIntent:(id)arg1;

@end
