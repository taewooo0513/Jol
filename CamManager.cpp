#include "DXUT.h"
#include "CamManager.h"

CamManager::CamManager()
{
	CamPos = D3DXVECTOR3(0, 0, 0);
	CamAt = D3DXVECTOR3(0, 0, 10);
	CamUp = D3DXVECTOR3(0.f, 1.f, 0.f);
	D3DXMatrixLookAtLH(&matView,&CamPos,&CamAt,&CamUp);
	g_Device->SetTransform(D3DTS_WORLD, &matView);
}

CamManager::~CamManager()
{
}

void CamManager::Shake()
{
}

void CamManager::SetCamPos(Vec3 pos)
{
	
	CamPos = pos;
	CamAt = D3DXVECTOR3(pos.x, pos.y, 10);
	CamUp = D3DXVECTOR3(0.f, 1.f, 0.f);
	D3DXMatrixLookAtLH(&matView, &CamPos, &CamAt, &CamUp);
	g_Device->SetTransform(D3DTS_WORLD, &matView);
}

Vec3 CamManager::GetCamPos()
{
	return CamPos;
}
