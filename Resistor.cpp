#include "Resistor.h"

// Assignment 3 for CS 3376.501
// Programmer: William Ong
// NetID: wco150030
// Description:
//		Resistor.cpp contains the definitions for a constructor, a destructor, 
// and the three virtual functions: getValue(), getUnits(), to_string()

// Constructor for Resistor class, initializes value and units
Resistor::Resistor(double value)
{
	this->value = value;
	this->units = "Ohm(s)";
}

// Destructor for Resistor class
Resistor::~Resistor()
{
	// Destructor still virtual
}

// Returns value of Resistor object
double Resistor::getValue() const
{
	return this->value;
}

// Returns units of Resistor object
std::string Resistor::getUnits() const
{
	return this->units;
}

// Returns string with the current value and units
std::string Resistor::to_string() const
{
	std::ostringstream buffer;
	buffer << "Resistor value (" << value << " " << units << ")";

	return buffer.str();
}
