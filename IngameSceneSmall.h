#pragma once
#include "Scene.h"
class IngameSceneSmall : public Scene
{
private:
	int Map[8400][2400];
public:
	IngameSceneSmall();
	virtual ~IngameSceneSmall();
	virtual void Init() override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void UIRender() override;
	virtual void Release() override;
};

