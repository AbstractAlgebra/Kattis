#include <bitset>
#include <iostream>
#include <string>

int main()
{
	int in;

	std::cin >> in;
	std::string x;

	while(in != 0)
	{
		x = x.append(std::to_string((in % 2)));
		in /= 2;
	}
	unsigned long output = std::bitset<32>(x).to_ulong();
	std::cout << output << std::endl;

}