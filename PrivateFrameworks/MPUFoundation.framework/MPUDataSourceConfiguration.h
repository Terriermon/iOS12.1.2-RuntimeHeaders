/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUDataSourceConfiguration : NSObject {
    NSString * _dataSourceCachingKey;
    Class  _dataSourceClass;
    id /* block */  _defaultQueryCreationBlock;
    long long  _entityType;
}

@property (nonatomic, copy) NSString *dataSourceCachingKey;
@property (nonatomic, readonly) Class dataSourceClass;
@property (nonatomic, copy) id /* block */ defaultQueryCreationBlock;
@property (nonatomic) long long entityType;

+ (id)configurationWithDataSourceClass:(Class)arg1;

- (void).cxx_destruct;
- (id)dataSourceCachingKey;
- (Class)dataSourceClass;
- (id /* block */)defaultQueryCreationBlock;
- (long long)entityType;
- (id)initWithDataSourceClass:(Class)arg1;
- (void)setDataSourceCachingKey:(id)arg1;
- (void)setDefaultQueryCreationBlock:(id /* block */)arg1;
- (void)setEntityType:(long long)arg1;

@end
