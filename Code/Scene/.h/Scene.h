#pragma once

enum SceneType			//�V�[���̏��
{
	SceneTypeTitle,		//�^�C�g���V�[��
	SceneTypeGame,		//�Q�[���V�[��
	SceneTypeClear,		//�N���A�V�[��

};

enum SceneStep			//�V�[�����̏�
{
	SceneStepInit,		//�V�[���̏�����
	SceneStepUpdate,	//�V�[���̍X�V
	SceneStepTerminate,	//�V�[���̏I��
};

void ExcuteScene();