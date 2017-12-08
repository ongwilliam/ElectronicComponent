#include "Battery.h"

// Assignment 3 for CS 3376.501
// Programmer: William Ong
// NetID: wco150030
// Description:
//		Battery.cpp contains the definitions for a constructor, a destructor, 
// and the three virtual functions: getValue(), getUnits(), to_string()

// Constructor for Battery class, initializes value and units
Battery::Battery(double value)
{
	this->value = value;
	this->units = "Volt(s)";
}

// Destructor for Battery class
Battery::~Battery()
{
	// Destructor still virtual
}

// Returns value of Battery object
double Battery::getValue() const
{
	return this->value;
}

// Returns units of Battery object
std::string Battery::getUnits() const
{
	return this->units;
}

// Returns string with the current value and units
std::string Battery::to_string() const
{
	std::ostringstream buffer;
	buffer << "Battery value (" << value << " " << units << ")";

	return buffer.str();
}
