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

	int lifetimeofscene = 20;

	while(thisSceneState == RUNNING)
	{
		std::cout << "Menu Scene Running!";
		lifetimeofscene--;
		if(lifetimeofscene <1)
			thisSceneState == DESTROY;
	}
	Scene* nextScene = new Scene();
	SceneManager::getInstance()->runwithscene(nextScene);
}