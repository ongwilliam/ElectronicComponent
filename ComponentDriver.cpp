#include <iostream>

#include "ElectronicComponent.h"
#include "Resistor.h"
#include "Capacitor.h"
#include "Battery.h"

// Assignment 3 for CS 3376.501
// Programmer: William Ong
// NetID: wco150030
// Description:
//		ComponentDriver.cpp contains the main function that builds an ElectronicComponent array
// and calls getValue() and getUnits() on each item and also displays output using the ElectronicComponent item.
// Finally, all of the items in the array are deleted.

// Main function
int main()
{
	// Build ElectronicComponent array
	const int NUMBER_OF_COMPONENTS = 7;
	ElectronicComponent *components[NUMBER_OF_COMPONENTS] = { new Resistor(5.0),
															new Capacitor(0.0001),
															new Battery(9.0),
															new Resistor(6.5),
															new Battery(11.1),
															new Capacitor(0.000001),
															new Resistor(10000.0)
															};

	// Call getValue() and getUnits() and display to output
	for (int i = 0; i < NUMBER_OF_COMPONENTS; i++)
	{
		std::cout << "Component value is " << components[i]->getValue() << " " << components[i]->getUnits() << std::endl;

	}

	std::cout << std::endl;

	// Display output using ElectronicComponent item
	for (int i = 0; i < NUMBER_OF_COMPONENTS; i++)
	{
		std::cout << "Component " << i << " " << *components[i] << std::endl;
	}

	// Delete each item in the array
	for (int i = 0; i < NUMBER_OF_COMPONENTS; i++)
	{
		delete components[i];
	}

	return 0;
}