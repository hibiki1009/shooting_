#pragma once

#include "DxLib.h"

#define BUTTONS 16

class PAD_INPUT {
private:
	static int NowKey[BUTTONS];
	static int OldKey[BUTTONS];
	static int KeyFlg[BUTTONS];

	// ���݂̓���
	static XINPUT_STATE Input;

public:
	// �p�b�h���͂̍X�V
	static void UpdateInput();

	// ���͊m�F�i�f�o�b�O�j
	static void DebugInput(); //�f�o�b�O

	// ���X�e�B�b�N��
	static int GetPadThumbLX() { return Input.ThumbLX; }

	// ���X�e�B�b�N�c
	static int GetPadThumbLY() { return -Input.ThumbLY; }

	// �E�X�e�B�b�N��
	static int GetPadThumbRX() { return Input.ThumbRX; }

	// �E�X�e�B�b�N�c
	static int GetPadThumbRY() { return -Input.ThumbRY; }

	// LT�����
	static int GetLeftTrigger() { return Input.LeftTrigger; }

	// RT�����
	static int GetRightTrigger() { return Input.RightTrigger; }

	// �{�^���������ꑱ���Ă�ԂP��Ԃ�
	static int GetNowKey(int key) { return NowKey[key]; }

	// �{�^�����������u�ԂP��Ԃ�
	static int GetKeyFlg(int key) { return KeyFlg[key]; }
};
