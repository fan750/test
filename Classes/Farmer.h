#ifndef __Farmer_Node_H__
#define __Farmer_Node_H__
#include"cocos2d.h"
class loadding:public cocos2d::Layer {
public:
    virtual bool init();
    CREATE_FUNC(loadding);
private:
    cocos2d::Sprite* s;
    cocos2d::Label* lbl;
};

#endif