#include "switch.h"

int main()
{
	smartDevice workDevice;
	lightBulb Lamp;
	smartLock Lock;
	smartSocket Socket;
	workDevice.deviceOperation(Lamp, Socket, Lock);


	system("pause");
	return 0;
}