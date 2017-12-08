#include "ElectronicComponent.h"

#ifndef CAPACITOR_H
#define CAPACITOR_H

class Capacitor : public ElectronicComponent
{
private:
	double value;
	std::string units;
public:
	Capacitor(double value);
	~Capacitor();
	double getValue() const;
	std::string getUnits() const;
	std::string to_string() const;
};

#endif
