#include "Capacitor.h"

// Assignment 3 for CS 3376.501
// Programmer: William Ong
// NetID: wco150030
// Description:
//		Capacitor.cpp contains the definitions for a constructor, a destructor, 
// and the three virtual functions: getValue(), getUnits(), to_string()

// Constructor for Capacitor class, initializes value and units
Capacitor::Capacitor(double value)
{
	this->value = value;
	this->units = "Farad(s)";
}

// Destructor for Capacitor class
Capacitor::~Capacitor()
{
	// Destructor still virtual
}

// Returns value of Capacitor object
double Capacitor::getValue() const
{
	return this->value;
}

// Returns units of Capacitor object
std::string Capacitor::getUnits() const
{
	return this->units;
}

// Returns string with the current value and units
std::string Capacitor::to_string() const
{
	std::ostringstream buffer;
	buffer << "Capacitor value (" << value << " " << units << ")";

	return buffer.str();
}
