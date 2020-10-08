#include "DXUT.h"
#include "TitleScene.h"
#include "ExObject.h"
TitleScene::TitleScene()
{
}

TitleScene::~TitleScene()
{
}

void TitleScene::Init()
{
	timer = new CDXUTTimer;
	timer->Start();

	

	TitleImage[0] = IMAGE->FindImage("TitleImage");
	TitleImage[1] = IMAGE->FindImage("TitleImage2");
	CurTime = OldTime = timeGetTime();

	for (int i = 0; i < 20; i++)
	{
		ddddddd[i] = MATH->SmoothNoise(600+i);
	}

}

void TitleScene::Update()
{
	
}

void TitleScene::Render()
{
}

void TitleScene::Release()
{
	if (DXUTIsMouseButtonDown(VK_LBUTTON))
	{
		
	}
}

void TitleScene::UIRender()
{
	CURSORINFO info;
	GetCursorInfo(&info);
	GetCursorPos(&info.ptScreenPos);
	info.cbSize = CURSOR_SHOWING;
	RENDER2D->Render(TitleImage[0], Vec2(0, 0));
	RENDER2D->TextDraw(to_string(timer->GetTime()), Vec2(500, 300), 50, true, D3DCOLOR_XRGB(0, 0, 0));

	if (timer->GetTime()>= 1.0f&& afsdfasbido < 20 )
	{
		afsdfasbido++;
		timer->Reset();
	}
		RENDER2D->TextDraw(to_string( ddddddd[afsdfasbido]),Vec2(500,500),50,true,D3DCOLOR_XRGB(0,0,0));
	
	


	//RENDER2D->TextDraw(to_string(),Vec2(WINSIZEX/2,300),50,true,D3DCOLOR_XRGB(255,255,255));
	
}
