#include <iostream>
#include <string>
#include "../headers/Name.h"
using namespace std;


Name::Name() : name(), surname() {}

Name::Name(const string &name, const string &surname) {
	this->name = name;
	this->surname = surname;
}

Name::~Name() {
}

string Name::initials() const {
	return (name.substr(0,1) + surname.substr(0,1));
}

bool operator <(const Name &first, const Name &second) {
	return (first.surname < second.surname) || (first.surname == second.surname && first.name < second.name); 
}

bool operator >(const Name &first, const Name &second) {
	return (first.surname > second.surname) || (first.surname == second.surname && first.name > second.name);

}

ostream &operator <<(ostream &stream, Name &person) {
	return (stream << person.name << ' ' << person.surname);
}

istream &operator >>(istream &stream, Name &person) {
	return (stream >> person.name >> person.surname);
}
