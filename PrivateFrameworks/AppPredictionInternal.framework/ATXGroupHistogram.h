/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXGroupHistogram : NSObject {
    id /* block */  _getGroup;
    NSMutableDictionary * _histogram;
    bool  _isTotalScoreValid;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    double  _total;
}

- (void).cxx_destruct;
- (void)addScoreForBundleId:(id)arg1 score:(double)arg2;
- (void)dealloc;
- (double)getScoreForBundleId:(id)arg1;
- (double)getTotalScore;
- (id)initWithGroupLookup:(id /* block */)arg1;

@end
