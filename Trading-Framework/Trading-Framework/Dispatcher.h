#pragma once
#include <queue>
#include "Event.h"

class Dispatcher
{
private :
	std::queue<Event> eventQueue;

};