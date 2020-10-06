#pragma once
#include "Scene.h"
class ExScene : public Scene
{
public:
	ExScene();
	virtual ~ExScene();
	virtual void Init() override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void UIRender() override;
	virtual void Release() override;
};

