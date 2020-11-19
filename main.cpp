#include "DXUT.h"
#include "main.h"
#include "ExScene.h"
#include "TitleScene.h"
#include "IngameSceneSmall.h"
main::main()
{
}

main::~main()
{
}

void main::Init()
{
	IMAGE->AddMesh("fdasafsadfkjhjhsdfalksd","./resource/c.obj");
	/*IMAGE->AddImage("Tile", "./resource/Dirt/Tile1.png");
	IMAGE->AddImage("TitleImage2", "./resource/Image/SplashScreens/Splash_9_1.png");
	IMAGE->AddImage("TitleImage","./resource/Image/SplashScreens/Splash_9_0.png");*/
	SCENE->AddScene("Title",new TitleScene);
	SCENE->AddScene("EX",new ExScene);
	SCENE->AddScene("IngameSceneSmall", new IngameSceneSmall);
	SCENE->ChangeScene("Title");
}

void main::Update()
{
	SCENE->Update();
	OBJ->Update();
}

void main::Render()
{
	

	SCENE->Render();
	OBJ->Render();
	RENDER2D->Begin();
	SCENE->UIRender();
	OBJ->UIRender();
	RENDER2D->End();
}

void main::Release()
{
	cImageManager::ReleaseInstance();
	cMeshLoader::ReleaseInstance();
	SoundManager::ReleaseInstance();
	SceneManager::ReleaseInstance();
	CamManager::ReleaseInstance();
	Math::ReleaseInstance();
	cRenderManager::ReleaseInstance();
	Render2DManager::ReleaseInstance();
	ObjectManager::ReleaseInstance();
}

void main::ResetDevice()
{
	RENDER2D->ResetDevice();
}

void main::LostDevice()
{
	RENDER2D->LostDevice();
}
