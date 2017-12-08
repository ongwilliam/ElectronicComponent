#include "ElectronicComponent.h"

#ifndef BATTERY_H
#define BATTERY_H

class Battery : public ElectronicComponent
{
private:
	double value;
	std::string units;
public:
	Battery(double value);
	~Battery();
	double getValue() const;
	std::string getUnits() const;
	std::string to_string() const;
};

#endif
