#include "Scene.h"

Scene::Scene()
{
	initCompleted = false;
	thisSceneState = PAUSED;
}

void Scene::init()
{

	std::cout << "Scene Initializing" <<std::endl;
	std::cout << "Loading Textures and other shizzle wizzle" <<std::endl;


	initCompleted = true;
}

void Scene::run()
{
	if(!initCompleted);
	{
		init();
	}
	SceneState = RUNNING;
	while(true)
	{

	}
}