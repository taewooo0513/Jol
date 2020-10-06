#pragma once
#include "singleton.h"

class cRenderManager : public singleton<cRenderManager>
{
private:
	struct sVerTex
	{
		D3DXVECTOR3 Pos;
		D3DXVECTOR2 uv;
		D3DXVECTOR3 normal;
		inline static constexpr DWORD FVF = D3DFVF_XYZ | D3DFVF_NORMAL | D3DFVF_TEX1;
	};
	LPDIRECT3DVERTEXBUFFER9 vb;
	LPDIRECT3DINDEXBUFFER9 ib;
	D3DXMATRIXA16 matProj;
public:
	cRenderManager();
	~cRenderManager();
	void Render(Mesh * mesh,Vec3 Pos,Vec3 Sclae = Vec3(1,1,1) ,Vec3 Rot = Vec3(0,0,0));
	void _2DRender(Texture * textureptr,Vec2 pos , Vec2 scale = Vec2(1,1),Vec2 rot = Vec2(0,0));
};

#define RENDER3D cRenderManager::GetInstance()