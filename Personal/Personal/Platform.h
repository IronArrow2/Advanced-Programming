#pragma once
#include <string>
#include "Game.h"

class Platform
{
private:
	std::string name;
	std::string manufacturer;
	Game games[];
public:
	void setName(std::string s);
	void setManufacturer(std::string s);
	std::string getName();
	std::string getManufacturer();
};
