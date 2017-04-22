#include <iostream>
#include <vector>
#include <ctype.h>
int main()
{
	std::string input;
	std::getline(std::cin,input);

	double wCount = 0;
	double lCount = 0;
	double uCount = 0;
	double sCount = 0;
	for(int i = 0; i < input.size(); i++)
	{
		char c = input[i];
		if(c == '_')
		{
			wCount++;
		}
		else if(islower(c))
		{	
			lCount++;
		}
		else if(isupper(c))
		{
			uCount++;
		}
		else
		{
			sCount++;
		}
	}
	std::cout << wCount / (double)(1.0 * input.size()) << std::endl;
	std::cout << lCount / (double)(1.0 * input.size()) << std::endl;
	std::cout << uCount / (double)(1.0 * input.size()) << std::endl;
	std::cout << sCount / (double)(1.0 * input.size()) << std::endl;



}



