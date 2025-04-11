#pragma once
#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
#include <string>
using namespace std;

class lightBulb;
class smartSocket;
class smartLock;

class smartDevice
{
public:
	int PINForLock = 1234;
	void deviceOperation(lightBulb, smartSocket, smartLock);
};

class lightBulb : public smartDevice
{
public:
	string statusMode = "Turned off";
	int brightnessPercentage;
	void changingBrightness(int);
};

class smartSocket : public smartDevice
{
public:
	string socketStatusMode = "Turned off";
	void socketVoltage();
};


class smartLock : public smartDevice
{
public:
	string lockStatusMode = "Unopened";
	void unblockingLock();
};
#endif // !SWITCH_H
