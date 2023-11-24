#include "pch.h"
#include "ResourceManager.h"

#include "ResourceHeader.h"
#include "PipeLineHeaders.h"

void ResourceManager::CreateDefaultMesh()
{
	std::shared_ptr<Mesh> mesh1 = std::make_shared<Mesh>();
	mesh1->CreateCube();
	Add(L"Cube", mesh1);

	std::shared_ptr<Mesh> mesh2 = std::make_shared<Mesh>();
	mesh2->CreateRactangle();
	Add(L"Quad", mesh2);

	std::shared_ptr<Mesh> mesh3 = std::make_shared<Mesh>();
	mesh3->CreateSphere();
	Add(L"Sphere", mesh3);
}

void ResourceManager::Init()
{
	CreateDefaultMesh();
}
