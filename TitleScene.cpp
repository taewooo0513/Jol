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

	OBJ->AddObj(new ExObject(Vec2(0,0)));

	TitleImage[0] = IMAGE->FindImage("TitleImage");
	TitleImage[1] = IMAGE->FindImage("TitleImage2");
	CurTime = OldTime = timeGetTime();

	for (int i = 0; i < 20; i++)
	{
		ddddddd[i] = MATH->SmoothNoise(404122+i);
	}
	for (int Dex = 0; Dex < 20; Dex++)
	{
		
		if (Dex != 0 && Dex != 19)
		{

			for (int dfs = 0; dfs < 20; dfs++)
			{
				D3DXVec2Hermite(&psos[Dex][dfs],&Vec2(Dex * 120,ddddddd[Dex]*5)
					,&(Vec2((Dex +1) * 120, ddddddd[Dex+1] * 5)-Vec2((Dex)* 120 ,ddddddd[Dex] * 5))
					,&Vec2((Dex +1)* 120 ,ddddddd[Dex +1] * 5)
					, &(Vec2((Dex +2) * 120 , ddddddd[Dex +2] * 5) - Vec2((Dex + 1) * 120 , ddddddd[Dex + 1] * 5))
					,dfs * 0.05);
			}

		}
	}
}

void TitleScene::Update()
{
	//for (int i = 0; i < 30; i++)
	//{
	//	for (int j = 0; j < 20; j++)
	//	{
	//		OBJ->AddObj(new ExObject(Vec2(psos[i][j].x, psos[i][j].y+ asdffasd)));
	//	}
	//}
	//asdffasd += 70;
}

void TitleScene::Render()
{
}

void TitleScene::Release()
{
	SAFE_DELETE(timer);
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
		RENDER2D->TextDraw(to_string( psos[11][afsdfasbido].y),Vec2(500,500),50,true,D3DCOLOR_XRGB(0,0,0));
	
	


	//RENDER2D->TextDraw(to_string(),Vec2(WINSIZEX/2,300),50,true,D3DCOLOR_XRGB(255,255,255));
	
}
