/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTUIControllerPresentation : NSObject {
    UIViewController * _controller;
    MSMessagesAppViewController * _modalMessagesController;
}

@property (nonatomic, readonly) UIViewController *controller;
@property (nonatomic) MSMessagesAppViewController *modalMessagesController;

+ (id)pendingGlobalPresentation;
+ (void)setPendingGlobalPresentation:(id)arg1;

- (void).cxx_destruct;
- (id)controller;
- (id)initWithController:(id)arg1;
- (id)modalMessagesController;
- (void)setModalMessagesController:(id)arg1;

@end
