#pragma once
#include"SphereCollider.h"
#include"CharaBase.h"
#include"PAD_INPUT.h"
#include <math.h>

class Player:public CharaBase
{
private:
	

	int HitBullet;		// �e�X�g�p

	int score;
	
	float Speed;			// �v���C���[�X�s�[�h
	float Pr;
	
	float start;


public:
	static int BulletFlg;		// 1�� 2�E 3�� 4��
	//static int Px, Py;	// �v���C���[�̍��W

	int test = 0;
	Player();
	~Player();

	// override�͊֐��̏������㏑�����邱�Ƃ��ł���
	void Update() override;
	void Draw() const override;

	// �R���g���[���̓��͂�Ԃ�
	float inputX();
	float inputY();
};

