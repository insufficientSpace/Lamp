#pragma once
#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
#include <string>
using namespace std;

class smartDevice
{
public:
	string statusMode = "Turned off";
	int brightnessPercentage;
	void changingBrightness(int);
};

class lightBulb : smartDevice
{
public:
	void deviceOperation();
	void setCondition();
};
#endif // !SWITCH_H