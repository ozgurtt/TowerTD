#ifndef __ENEMYLAYER_H
#define __ENEMYLAYER_H
#include "cocos2d.h"
using namespace cocos2d;
class EnemyLayer:public Layer{
public:
	void onEnter();
	virtual bool init();
	CREATE_FUNC(EnemyLayer);
	//����̹��
	virtual void Outtank();
private:
	//��̹�˵Ĳ����ص�
	virtual void update(float t);
	bool isHaveTank(Vec2  postion);//�˷������ж�,�Ƿ�ɲ���TANK
};
#endif