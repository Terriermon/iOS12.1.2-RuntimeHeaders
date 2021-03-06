/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFSpawn : NSObject {
    int  _pid;
    int  _termstatus;
}

@property (readonly) int processID;
@property (readonly) int terminationStatus;

+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3;
+ (id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 environment:(id)arg3 redirect:(id)arg4;

- (int)processID;
- (int)terminationStatus;
- (void)waitUntilExit;

@end
