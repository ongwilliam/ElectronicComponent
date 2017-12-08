#include "ElectronicComponent.h"

// Assignment 3 for CS 3376.501
// Programmer: William Ong
// NetID: wco150030
// Description:
//		ElectronicComponent.cpp contains the definitions for a destructor, 
// and a function: operator<<

// Destructor for ElectronicComponent class
ElectronicComponent::~ElectronicComponent()
{

}

// Operator << overload, call component's to_string() method to print output
std::ostream& operator<< (std::ostream& outputStream, const ElectronicComponent& component)
{
	outputStream << component.to_string();
	return outputStream;
}