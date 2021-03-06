/* Generated by EzioChiu.
 */

@protocol PXPhotoKitAdjustedDisplayAsset <PXDisplayAsset>

@required

- (NSString *)adjustedContentIdentifier;
- (PLPhotoEditModel *)applyAdjustmentsToEditModel:(PLPhotoEditModel *)arg1 editSource:(PLEditSource *)arg2 renderer:(PLPhotoEditRenderer *)arg3;
- (PHAsset *)photoKitAsset;
- (bool)wantsAdjustments;

@end
