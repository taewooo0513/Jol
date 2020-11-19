#include "DXUT.h"
#include "ExObject.h"

ExObject::ExObject(Vec2 pos)
	:Pos(pos)
{
	mesh = IMAGE->FindMesh("fdasafsadfkjhjhsdfalksd");
}

ExObject::~ExObject()
{
}

void ExObject::Update()
{
}

void ExObject::Render()
{
	if (DXUTIsKeyDown(VK_LEFT))
	{
		Pos.x-=5;
	}if (DXUTIsKeyDown(VK_RIGHT))
	{
		Pos.x+=5;
	}
	if (DXUTIsKeyDown(VK_DOWN))
	{
		Pos.y-=5;
	}
	if (DXUTIsKeyDown(VK_UP))
	{
		Pos.y+=5;
	}
	RENDER3D->Render(mesh, Vec3(Pos.x,Pos.y,1000));
}

void ExObject::UIRender()
{

}

void ExObject::Collider(Object * obj)
{
}
