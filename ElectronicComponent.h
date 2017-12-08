#include <String>
#include <sstream>

#ifndef ELECTRONICCOMPONENT_H
#define ELECTRONICCOMPONENT_H

class ElectronicComponent
{
public:
	virtual ~ElectronicComponent();
	virtual double getValue() const = 0;
	virtual std::string getUnits() const = 0;
	virtual std::string to_string() const = 0;

	
};

std::ostream& operator<< (std::ostream& outputStream, const ElectronicComponent& component);

#endif

