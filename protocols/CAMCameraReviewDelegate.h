/* Generated by EzioChiu.
 */

@protocol CAMCameraReviewDelegate <NSObject>

@optional

- (void)reviewViewController:(UIViewController<CAMCameraReviewViewController> *)arg1 didFinishReviewingAssets:(NSArray *)arg2;
- (void)reviewViewControllerDidCancelReview:(UIViewController<CAMCameraReviewViewController> *)arg1;
- (void)reviewViewControllerDidRequestRetake:(UIViewController<CAMCameraReviewViewController> *)arg1;

@end
