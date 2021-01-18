#include "Platform.h"
using namespace std;

Platform::Platform()
{
	name = "";
	manufacturer = "";
	games[0];
}
Platform::Platform(string n, string m)
{
	name = n;
	manufacturer = m;
}