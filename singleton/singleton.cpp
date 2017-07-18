#include <iostream>
#include "singleton.h"

using namespace std;

GameSetting* GameSetting::_instance = NULL;

GameSetting* GameSetting::getInstance() {
	if(_instance == NULL)
		_instance = new GameSetting();
	return _instance;
	}

int main()
{
GameSetting* newInstance = GameSetting::getInstance();

newInstance->printSettings();

return 0;
}
 
