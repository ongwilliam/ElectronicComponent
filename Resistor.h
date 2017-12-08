#include "ElectronicComponent.h"

#ifndef RESISTOR_H
#define RESISTOR_H

class Resistor: public ElectronicComponent
{
private:
	double value;
	std::string units;
public:
	Resistor(double value);
	~Resistor();
	double getValue() const;
	std::string getUnits() const;
	std::string to_string() const;
};

#endif

