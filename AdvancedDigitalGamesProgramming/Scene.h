#ifndef _SCENE_H_
#define _SCENE_H_
#include <iostream>

enum  SceneState{RUNNING, PAUSED, DESTROY};

class Scene{
public:
	Scene();
		
	
	void init();
	void run();

	
private:
	bool initCompleted;
	SceneState thisSceneState; 
};




#endif