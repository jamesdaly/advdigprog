#include "MenuScene.h"
#include "SceneManager.h"

void MenuScene::init()
{
	Scene::init();
}

void MenuScene::run()
{
	if(!initCompleted)
	{
		init();
	}
	thisSceneState = RUNNING;

	int lifetimeofscene = 2000;

	while(thisSceneState == RUNNING)
	{
		std::cout << "Menu Scene Running!" << std::endl;
		lifetimeofscene--;
		if(lifetimeofscene <1)
			thisSceneState = DESTROY;
	}
	Scene* nextScene = new Scene();
	SceneManager::getInstance()->runwithscene(nextScene);
}