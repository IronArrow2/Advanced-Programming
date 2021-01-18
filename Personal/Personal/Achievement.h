#pragma once
#include <string>

class Achievement
{
private:
	std::string title;
	std::string description;
	int scoreValue;
public:
	//constructors
	Achievement();
	Achievement(std::string t, std::string d, int s);
	//getter functions
	std::string getTitle();
	std::string getDescription();
	int getScoreValue();
	//setter functions
	void setTitle(std::string s);
	void setDescription(std::string s);
	void setScoreValue(int i);
};