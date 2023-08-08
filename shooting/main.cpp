#include "common.h"
#include"DxLib.h"

#include"AbstractScene.h"
#include"SceneManager.h"

#include"GameMain.h"
#include"FPS.h"
#include"PAD_INPUT.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetMainWindowText("shooting");		// �^�C�g����ݒ�
	ChangeWindowMode(true);					// �E�B���h�E���[�h�ŋN��

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);// �T�C�Y
	SetWindowSize(SCREEN_WIDTH, SCREEN_HEIGHT);
	CreateFontToHandle(NULL, 20, 3, DX_FONTTYPE_ANTIALIASING);// �t�H���g�ݒ�

	if (DxLib_Init() == -1) {
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);

	SceneManager scene = (dynamic_cast<AbstractScene*>(new GameMain()));// ���߂̃V�[����scene�ɃL���X�g

	FPS FPSct(FRAMERATE, UPDATETIME);// �t���[�����[�g�ݒ�

	// �Q�[�����[�v
	while (ProcessMessage() == 0 && scene.Update() != nullptr) {// �V�[�����̒l����ɂȂ�����I��

		PAD_INPUT::UpdateInput();			// PAD�̓��͍X�V
		ClearDrawScreen();					// ��ʂ̏�����

		scene.Draw();						// ���݂̃V�[����`�悷��

		FPSct.All();						// FPS�������܂Ƃ߂�����

		ScreenFlip();						// ����ʂ̓��e��\�ɕ\������
	}
	DxLib_End();
	return 0;
}