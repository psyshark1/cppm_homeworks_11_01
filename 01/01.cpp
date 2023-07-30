#include"Greeter.h"

int main()
{
	std::system("chcp 1251");

	Greeter* g = new Greeter();

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	g->greet(name);
	std::system("pause");
	return 0;
}