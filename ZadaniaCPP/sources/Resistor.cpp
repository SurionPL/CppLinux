#include <iostream>
#include "../headers/Resistor.h"

using namespace std;

Resistor::Resistor() : resistance(0) {}

Resistor::Resistor(double resistance) : resistance(resistance) {}

void Resistor::setResistance(double resistance) {
	this->resistance = resistance;
}

double getResistance(const Resistor &resistor) {
	return resistor.resistance;
}

Resistor getSerial(const Resistor &first, const Resistor &second) {
	Resistor resistor(first.resistance + second.resistance);
	return resistor;

}
Resistor getParallel(const Resistor &first, const Resistor &second) {
	Resistor resistor;
	resistor.resistance = (first.resistance * second.resistance) / (first.resistance + second.resistance);
	return resistor;

}
