#pragma once
#include <vector>
#include "AbstractScene.h"
#include"DxLib.h"

#include"Player.h"
#include"Bullet.h"


class GameMain :public AbstractScene {
private:
	

public:

	// �N���X�I�u�W�F�N�g
	Player* player;
	Bullet* bullet;

	void Game();
	// �R���X�g���N�^
	GameMain();

	// �f�X�g���N�^
	virtual ~GameMain();

	// �`��ȊO�̍X�V����������
	virtual AbstractScene* Update()override;

	// �`��Ɋւ��邱�Ƃ���������
	virtual void Draw()const override;
};

