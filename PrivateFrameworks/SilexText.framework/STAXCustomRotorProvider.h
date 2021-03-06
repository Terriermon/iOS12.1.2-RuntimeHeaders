/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SilexText.framework/SilexText
 */

@interface STAXCustomRotorProvider : NSObject {
    NSSet * _cachedAvailableRotors;
    NSObject * _rootElement;
}

@property (nonatomic, readonly, copy) NSSet *cachedAvailableRotors;
@property (nonatomic) NSObject *rootElement;

- (void).cxx_destruct;
- (id)cachedAvailableRotors;
- (id)graphSearchForAvailableCustomRotorsAndUpdateCache;
- (id)init;
- (id)initWithRootElement:(id)arg1;
- (id)rootElement;
- (void)setRootElement:(id)arg1;

@end
