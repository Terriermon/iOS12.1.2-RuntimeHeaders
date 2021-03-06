/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
 */

@interface ITIdleTimerState : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSHashTable * _idleTimerDisableAssertions;
    <BSInvalidatable> * _stateCaptureAssertion;
}

+ (bool)isIdleTimerServiceAvailable;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_init;
- (id)_queue_newAssertionToDisableIdleTimerForReason:(id)arg1;
- (void)dealloc;
- (id)newAssertionToDisableIdleTimerForReason:(id)arg1;

@end
