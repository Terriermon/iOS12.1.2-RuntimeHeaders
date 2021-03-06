/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTypingChatItem : CKChatItem

@property (getter=isFromMe, nonatomic, readonly) bool fromMe;
@property (nonatomic, readonly) CALayer<IMTypingIndicatorLayerProtocol> *indicatorLayer;

- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (bool)displayDuringSend;
- (id)indicatorLayer;
- (bool)isFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (BOOL)transcriptOrientation;
- (bool)wantsDrawerLayout;

@end
