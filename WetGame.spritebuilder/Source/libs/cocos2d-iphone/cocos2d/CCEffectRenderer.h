//
//  CCEffectRenderer.h
//  cocos2d-ios
//
//  Created by Thayer J Andrews on 5/21/14.
//
//

#import <Foundation/Foundation.h>
#import "CCTypes.h"

#if CC_ENABLE_EXPERIMENTAL_EFFECTS
@class CCEffect;
@class CCRenderer;
@class CCSprite;
@class CCTexture;

@interface CCEffectRenderer : NSObject

@property (nonatomic, assign) CGSize contentSize;
@property (nonatomic, assign) float contentScale;

-(id)init;
-(void)drawSprite:(CCSprite *)sprite withEffect:(CCEffect *)effect renderer:(CCRenderer *)renderer transform:(const CCMatrix4 *)transform;

@end
#endif
