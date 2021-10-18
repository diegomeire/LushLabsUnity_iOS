#import <Foundation/Foundation.h>
#import "NativeCallProxy.h"
#import <AudioToolbox/AudioToolbox.h>

@implementation FrameworkLibAPI

id<NativeCallsProtocol> api = NULL;
+(void) registerAPIforNativeCalls:(id<NativeCallsProtocol>) aApi
{
    api = aApi;
}

@end

/**
 * The methods below bridge the calls from Unity into iOS. When Unity call any
 * of the methods below, the call is forwarded to the iOS bridge using the
 * `NativeCallsProtocol`.
 */
extern "C" {

  void
  onMessage(const char* message)
  {
      const NSString* str = @(message);
      [api onMessage: str];
  }

  void
  setLushLabsUnityDelegate(LushLabsUnityDelegate delegate)
  {
      [api onSetLushLabsUnityDelegate: delegate];
  }


  void
  onComplete(){
      [api onComplete];
  }

  void
    onLoading(const char* pct){
      const NSString* str = @(pct);
      [api onLoading:str];
  }

  void
  showTopBar(){
      [api showTopBar];
  }


  void
  hideTopBar(){
      [api hideTopBar];
  }

    void popViewController(){
        [api popViewController];
    }

  void
    playCameraShutter(){
        [api playCameraShutter];
    }

}
