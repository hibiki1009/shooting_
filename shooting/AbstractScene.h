#pragma once

#pragma once

//�f�t�H���g�̒��ۃV�[���N���X
//���[�U�[�͂�����p�����ăV�[������������Ɗy
class AbstractScene {
private:
	int num = 0;
	void a() {
		num = 0;
	}

public:
	//�f�X�g���N�^
	virtual ~AbstractScene() {};

	//�`��ȊO�̍X�V����������
	virtual AbstractScene* Update() = 0;

	//�`��Ɋւ��邱�Ƃ���������
	virtual void Draw()const = 0;//�C���^�[�t�F�C�X�N���X

	//interface�i�C���^�[�t�F�C�X�j�́A
	//�N���X���ǂ̂悤�ȃ��\�b�h�������Ă���̂������炩���ߒ�`����A
	//����ΐ݌v���̂悤�ȑ��݂ł��B �N���X�Ƃ͈قȂ�A��̓I�ȏ������e���L�q�����A
	//���\�b�h�̈�����߂�l�������`���܂��B

};
