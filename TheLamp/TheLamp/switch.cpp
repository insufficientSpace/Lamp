#include "switch.h"
void lightBulb::setCondition()
{
	deviceOperation();
}

void lightBulb::deviceOperation()
{
	int choice = 0;
	int percentBrightness = 0;
	cout << "The device is currently turned off\n";
	cout << "Do you want to turn on the lamp and select the brightness percentage?(1 - yes, 2 - no): ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "The lamp is on\n";
		cout << "Enter the brightness value: ";
		cin >> percentBrightness;
		changingBrightness(percentBrightness);
	}
	else if (choice == 2)
		cout << "There is no change in the archor\n";
}

void smartDevice::changingBrightness(int percent)
{
	if (percent < 0)
	{
		brightnessPercentage = 0;
		cout << "Bright Percentage: " << brightnessPercentage << endl;
	}
	else if (percent > 100)
	{
		brightnessPercentage = 100;
		cout << "Bright Percentage: " << brightnessPercentage << endl;
	}
	else
	{
		brightnessPercentage = percent;
		cout << "Bright Percentage: " << brightnessPercentage << endl;
	}
}