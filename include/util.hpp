/*
	GLFW Pong
	Copyright (c) 2014 Samuel "MrOverkill" Meyers
	Public Domain
*/

#ifndef UTIL_H
#define UTIL_H

#include <cstdlib>
#include <ctime>

namespace ovk
{

namespace util
{

class Util
{
	public:
		Util();
		float randFloat(float min, float max);
		int randInt(int min, int max);
};

}

}

#endif
