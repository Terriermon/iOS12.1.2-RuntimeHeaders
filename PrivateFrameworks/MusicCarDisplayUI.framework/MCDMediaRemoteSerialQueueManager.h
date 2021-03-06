/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MCDMediaRemoteSerialQueueManager : NSObject {
    NSOperationQueue * _mediaRemoteSerialQueue;
}

@property (nonatomic, retain) NSOperationQueue *mediaRemoteSerialQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addOperation:(id /* block */)arg1 cancelAllOperations:(bool)arg2;
- (void)cancelAllOperations;
- (id)init;
- (id)mediaRemoteSerialQueue;
- (void)setMediaRemoteSerialQueue:(id)arg1;

@end
