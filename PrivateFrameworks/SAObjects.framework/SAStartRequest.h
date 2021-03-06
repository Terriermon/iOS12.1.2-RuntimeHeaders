/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) bool clearContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool eyesFree;
@property (nonatomic) bool handsFree;
@property (nonatomic, copy) NSString *hardwareBuild;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isCarryDevice;
@property (nonatomic, copy) NSString *motionActivity;
@property (nonatomic, copy) NSNumber *motionConfidence;
@property (nonatomic, copy) NSString *origin;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, retain) SASStartSpeech *sourceSpeechRequest;
@property (readonly) Class superclass;
@property (nonatomic) bool talkOnly;
@property (nonatomic) bool textToSpeechIsMuted;
@property (nonatomic, copy) NSString *utterance;

+ (id)startRequest;
+ (id)startRequestWithDictionary:(id)arg1 context:(id)arg2;

- (bool)clearContext;
- (id)encodedClassName;
- (bool)eyesFree;
- (id)groupIdentifier;
- (bool)handsFree;
- (id)hardwareBuild;
- (id)isCarryDevice;
- (id)motionActivity;
- (id)motionConfidence;
- (id)origin;
- (bool)requiresResponse;
- (void)setClearContext:(bool)arg1;
- (void)setEyesFree:(bool)arg1;
- (void)setHandsFree:(bool)arg1;
- (void)setHardwareBuild:(id)arg1;
- (void)setIsCarryDevice:(id)arg1;
- (void)setMotionActivity:(id)arg1;
- (void)setMotionConfidence:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setSourceSpeechRequest:(id)arg1;
- (void)setTalkOnly:(bool)arg1;
- (void)setTextToSpeechIsMuted:(bool)arg1;
- (void)setUtterance:(id)arg1;
- (id)sourceSpeechRequest;
- (bool)talkOnly;
- (bool)textToSpeechIsMuted;
- (id)utterance;

@end
