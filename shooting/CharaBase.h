#pragma once
#include"DxLib.h"
#include"SphereCollider.h"

class CharaBase : public SphereCollider
{
public:
	float speed;
	int image;

	virtual void Update();
	virtual void Draw()const;
	virtual int Hit(SphereCollider bullet);		// �_���[�W���� �_���[�W���󂯎��A�c��Hp���v�Z���ĕԂ�
};

