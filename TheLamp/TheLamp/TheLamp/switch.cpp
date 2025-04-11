#include "switch.h"

void smartDevice::deviceOperation(lightBulb theLamp, smartSocket theSocket, smartLock theLock)
{
	int choice = 0;
	int secondChoice = 0;
	int thirdChoice = 0;
	int percentBrightness = 0;
	cout << "The device is currently turned off\n";
	cout << "Do you want to turn on the lamp and select the brightness percentage?(1 - yes, 2 - no): ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "The lamp is on\n";
		cout << "Enter the brightness value: ";
		cin >> percentBrightness;
		theLamp.changingBrightness(percentBrightness);
	}
	else if (choice == 2)
		cout << "There is no change in the archor\n";


	cout << "The second device is a smart lock, do you want to unlock it?(1 - yes, 2 - no): ";
	cin >> secondChoice;
	if (secondChoice == 1)
		theLock.unblockingLock();

	cout << "Now you have an outlet, turn it on?(1 - yes, 2 - no): ";
	cin >> thirdChoice;
	if (thirdChoice == 1)
	{
		theSocket.socketStatusMode = "Socket on";
		theSocket.socketVoltage();
	}

}

void lightBulb::changingBrightness(int percent)
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

void smartSocket::socketVoltage()
{
	int voltage = 0;
	cout << "Enter the voltage quantity: ";
	cin >> voltage;
	cout << "Outlet voltage: " << voltage << endl;
}

void smartLock::unblockingLock()
{
	cout << "Enter the PIN code to unlock the lock: ";
	cin >> PINForLock;
	if (PINForLock == 1234)
	{
		lockStatusMode = "The lock is open\n";
		cout << lockStatusMode;
	}
	else
	{
		cout << "Invalid PIN code!";
		lockStatusMode = "The lock is blocked\n";
	}
}

