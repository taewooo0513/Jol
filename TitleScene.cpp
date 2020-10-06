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
	TitleImage[0] = IMAGE->FindImage("TitleImage");
	TitleImage[1] = IMAGE->FindImage("TitleImage2");
	CurTime = OldTime = timeGetTime();
	timer = new CDXUTTimer;
	timer->Start();


}

void TitleScene::Update()
{
	srand(200);
	CurTime = timeGetTime();
	if(FD != 10)
	for (; FD < 20; FD++)
	{
		SE[FD] = Vec2(100 * FD, 300+300*CC[FD]);
	}
	
	if (timer->GetTime() > 0.3 && FSDA != 20)
	{
		timer->Reset();
		if (i != 10)
		{
			i++;
		}
		if (i == 10)
		{
			i = 0;
			FSDA++;
		}
	OBJ->AddObj(new ExObject(map[FSDA][i]));


	OldTime = CurTime;
	}
	if (i == 10)
	{
		
	}
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
	RENDER2D->TextDraw(to_string(timer->GetTime()),Vec2(500,500),50,true,D3DCOLOR_XRGB(254,244,244));
	
		
		
		
	


	//RENDER2D->TextDraw(to_string(),Vec2(WINSIZEX/2,300),50,true,D3DCOLOR_XRGB(255,255,255));
	
}
