#pragma once

#pragma once
#include "AbstractScene.h"

//�V�[���}�l�[�W���[�N���X
//�e�V�[���̐؂�ւ����Ǘ�����
class SceneManager :public AbstractScene {//�p�����ASceneManager��AbstractScene�̐݌v�}���R�s�[
private:
	AbstractScene* mScene;//���݂̃V�[��

public:
	//�R���X�g���N�^
	SceneManager(AbstractScene* scene) :mScene(scene) {}

	//�f�X�g���N�^
	~SceneManager() {
		delete mScene;//���݂̃V�[��������
	}

	//�`��ȊO�̍X�V����������
	AbstractScene* Update()override;

	//�`��Ɋւ��邱�Ƃ���������
	void Draw()const override;

};
