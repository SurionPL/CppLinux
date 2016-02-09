#include <string>
#include <iostream>


class Name {	
private:
	std::string name;
	std::string surname; 	 
public:
	Name();
	Name(const std::string &name, const std::string &surname);	
	std::string initials() const;
	friend bool operator <(const Name &first, const Name &second);
	friend bool operator >(const Name &first, const Name &second);
	friend std::ostream &operator <<(std::ostream &, Name &);
	friend std::istream &operator >>(std::istream &, Name &);
	~Name();
};
