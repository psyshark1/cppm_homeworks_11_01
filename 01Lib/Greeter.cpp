#include"Greeter.h"

Greeter::Greeter() {}
Greeter::~Greeter() {}
void Greeter::greet(std::string msg)
{
	std::cout << "Здравствуйте, " << msg << std::endl;
}