#include "IEngine.h"

class Engine : public IEngine
{
public:
	Engine() {}
	~Engine() {}

	void Consume(double liters) {}

	void Start()
	{
		isRunning = true;
	}

	void Stop()
	{
		isRunning = false;
	}

};
