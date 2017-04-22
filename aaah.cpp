#include <iostream>
#include <string>

int main()
{
	std::string a1;
	std::string a2;
	std::getline(std::cin, a1);
	std::getline(std::cin,a2);

	if (a1.size() >= a2.size())
	{
		std::cout << "go" << std::endl;
	}
	else
	{
		std::cout << "no" << std::endl;
	}
}