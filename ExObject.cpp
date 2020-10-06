#include "DXUT.h"
#include "ExObject.h"

ExObject::ExObject(Vec2 pos)
	:Pos(pos)
{
	image = IMAGE->FindImage("Tile");
}

ExObject::~ExObject()
{
}

void ExObject::Update()
{
}

void ExObject::Render()
{
}

void ExObject::UIRender()
{
	RENDER2D->Render(image, Pos);

}

void ExObject::Collider(Object * obj)
{
}
