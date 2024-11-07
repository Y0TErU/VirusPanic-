#pragma once

class Scene
{
public:
	void Execute();
	void ExecuteType(int currentType_);
	void ExecuteStep(int currentStep_);
	int GetCurrentType();		//�V�[���^�C�v�̃Q�b�^�[
	int GetCurrentStep();		//�V�[���X�e�b�v�̃Q�b�^�[

private:
	enum SceneType
	{
		Title,		//�^�C�g���V�[��
		Game,		//�Q�[���V�[��
		Clear,		//�N���A�V�[��
	};

	enum SceneStep			//�V�[�����̏�
	{
		Init,		//�V�[���̏�����
		Update,		//�V�[���̍X�V
		Terminate,	//�V�[���̏I��
	};

	int currentType = Title;	//�V�[���^�C�v
	int currentStep = Init;		//�V�[���X�e�b�v

};


