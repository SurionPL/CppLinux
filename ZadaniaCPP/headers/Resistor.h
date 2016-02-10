#pragma once
#include <iostream>

class Resistor {
private:
	double resistance;
public:
	Resistor();
	Resistor(double resistance);
	void setResistance(double resistance);
	friend double getResistance(const Resistor &resistor);
	friend Resistor getSerial(const Resistor &first, const Resistor &second);
	friend Resistor getParallel(const Resistor &first, const Resistor &second);
	~Resistor();	
};
