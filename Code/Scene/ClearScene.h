#pragma once

class ClearScene
{
public:
	void Initialize(int sceneStep_);	//�N���A�V�[���̏�����
	void Update(int sceneStep_);		//�N���A�V�[���̍X�V
	void Terminate(int sceneStep_);	//�N���A�V�[���̏I��
	void Execute(int sceneStep_);		//�N���A�V�[���̑J��

};