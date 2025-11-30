#include"Farmer.h"
#include"Home.h"
bool loadding::init() {
	if (!Layer::init()) {
		return false;
	}
	s = cocos2d::Sprite::create("loadpicture.jpg");//图片初始化
	auto vis = cocos2d::Director::getInstance()->getVisibleSize();
	auto tex = s->getContentSize();
	float scale = std::max(vis.width / tex.width, vis.height / tex.height);
	s->setScale(scale);
	s->setPosition(vis * 0.5f);
	this->addChild(s);

	lbl = cocos2d::Label::createWithSystemFont(u8"开始游戏", "Microsoft YaHei", 36);//按钮初始化
	lbl->setColor(cocos2d::Color3B::BLACK);
	lbl->enableOutline(cocos2d::Color4B::WHITE, 1);
	auto item = cocos2d::CCMenuItemLabel::create(lbl, [](cocos2d::Ref* sender) {
		Home* home = Home::create();
		cocos2d::Director::getInstance()->replaceScene(home);
		});
	item->setPosition(cocos2d::Vec2(vis.width * 0.5f, vis.height * 0.2f));
	auto menu = cocos2d::Menu::create(item, nullptr);
	menu->setPosition(cocos2d::Vec2::ZERO);
	this->addChild(menu);
	return true;
}