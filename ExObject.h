#pragma once
#include "Object.h"
class ExObject : public Object
{
private:
	Vec2 Pos;
private:
	Mesh * mesh;
	Texture * image;
public :
	ExObject(Vec2 pos);
	virtual ~ExObject();
	virtual void Update() override;
	virtual void Render() override;
	virtual void UIRender() override;
	virtual void Collider(Object * obj)override;
};

