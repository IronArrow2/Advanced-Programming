#pragma once
#include <string>
#include "Achievement.h"

class Game
{
private:
	std::string name;
	std::string publisher;
	std::string developer;
	Achievement achievements[];
public:
	//constructors
	Game();
	Game(std::string n, std::string p, std::string d);
};