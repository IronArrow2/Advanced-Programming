#include "Achievement.h"
using namespace std;

//constructors
Achievement::Achievement()
{
	title = "";
	description = "";
	scoreValue = 0;
}
Achievement::Achievement(string t, string d, int s)
{
	title = t;
	description = d;
	scoreValue = s;
}
//getter functions
string Achievement::getTitle()
{
	return title;
}
string Achievement::getDescription()
{
	return description;
}
int Achievement::getScoreValue()
{
	return scoreValue;
}
//setter functions
void Achievement::setTitle(string s)
{
	title = s;
}
void Achievement::setDescription(string s)
{
	description = s;
}
void Achievement::setScoreValue(int i)
{
	scoreValue = i;
}