#include"Home.h"
USING_NS_CC;
Scene* Home::createScene()
{
    return Home::create();
}
static void problemLoading(const char* filename)
{
    printf("Error while loading: %s\n", filename);
    printf("Depending on how you compiled you might have to add 'Resources/' in front of filenames in HelloWorldScene.cpp\n");
}
bool Home::init()
{
    //////////////////////////////
    // 1. super init first
    if (!Scene::init())
    {
        return false;
    }
    s = Sprite::create("6.png");
    auto vis = cocos2d::Director::getInstance()->getVisibleSize();
    auto tex = s->getContentSize();
    float scale = std::max(vis.width / tex.width, vis.height / tex.height);
    s->setScale(scale);
    s->setPosition(vis * 0.5f);
    layer = Layer::create();
    layer->addChild(s);
    this->addChild(layer);

    return true;
}
void Home::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();

    /*To navigate back to native iOS screen(if present) without quitting the application  ,do not use Director::getInstance()->end() as given above,instead trigger a custom event created in RootViewController.mm as below*/

    //EventCustom customEndEvent("game_scene_close_event");
    //_eventDispatcher->dispatchEvent(&customEndEvent);


}