#ifndef __HOME_SCENE_H__
#define __HOME_SCENE_H__

#include "cocos2d.h"

class Home : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);

    // implement the "static create()" method manually
    CREATE_FUNC(Home);
private:
    cocos2d::Layer* layer;
    cocos2d::Sprite* s;
};

#endif // __HELLOWORLD_SCENE_H__

