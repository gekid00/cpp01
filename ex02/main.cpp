#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "original str: " << str << std::endl;
	std::cout << "pointer to str: " << *ptr << std::endl;
	std::cout << "reference to str: " << ref << std::endl;

	std::cout << std::endl;

	std::cout << "str adress: " << &str << std::endl;
	std::cout << "pointer adress: " << &ptr << std::endl;
	std::cout << "reference adress: " << &ref << std::endl;

	return 0;
}