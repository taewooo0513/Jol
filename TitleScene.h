#pragma once
#include "Scene.h"
class TitleScene : public Scene
{
private:
	Texture * TitleImage[10];
	HWND * hwnd;
	DWORD CurTime, OldTime;
public:
	float ASD[1000];
	Vec2 a,b,c,d;
	Vec2 map[500][100];
	Vec2 SE[53];
	int FSDA =1 ;
	int i = 0;
	int FD = 0;
	float CC[53];
	float DF;
	int aa = 0;
	int bb = 0;
	CDXUTTimer * timer;
	TitleScene();
	virtual ~TitleScene();
public:
	virtual void Init() override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void Release() override;
	virtual void UIRender() override;
};

