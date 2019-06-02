#include <string>

#ifndef UNIT
#define UNIT

class Unit 
{
private:
	std::string part;

protected:
	std::string leftShift, rightShift;

public:
	Unit (std::string part, std::string rightShift, std::string leftShift);
	void setRightShift (std::string riightShift);
	std::string getLeftShift ();
	std::string getRightShift ();
	std::string getPart ();
};

#endif
