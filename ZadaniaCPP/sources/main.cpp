#include <iostream>
#include <string>
#include "../headers/Name.h"
#include "../headers/Resistor.h"
using namespace std;

void name();

int main(void) {
	//Name pierwsza("Jan","Kowalski");
	//cout << pierwsza;
	name();
	return 0;	
}

void name() {
	Name osoby[2];
	int i = 2;
	for(int i = 0; i < 2; i++) {
		cout << "Wprowadź dane osoby: ";
		cin >> osoby[i];
	}
	if(osoby[0] < osoby[1])
		cout << osoby[0] << endl << osoby [1] << endl;
	else
		cout << osoby[1] << endl << osoby [0] << endl;
	cout << osoby[0].initials() << endl;	
}
