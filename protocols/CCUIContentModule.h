/* Generated by EzioChiu.
 */

@protocol CCUIContentModule <NSObject>

@required

- (UIViewController<CCUIContentModuleContentViewController> *)contentViewController;

@optional

- (UIViewController<CCUIContentModuleBackgroundViewController> *)backgroundViewController;
- (void)setContentModuleContext:(CCUIContentModuleContext *)arg1;

@end
