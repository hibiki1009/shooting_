#include "SceneManager.h"

AbstractScene* SceneManager::Update() {// AbstractScene��Update��SceneManager�Ŏg��
	AbstractScene* p = mScene->Update();// ���̃V�[�������ɑ��
	if (p != mScene) {//�@�������̃V�[���ƈႤ�Ȃ�
		delete mScene;// ���̃V�[��������
		mScene = p;// p�����̃V�[���ɑ��
	}

	return p;// p�̃V�[����Ԃ�
}
void SceneManager::Draw()const {
	mScene->Draw();//���̃V�[����`�悷��

}

