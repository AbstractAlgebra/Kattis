#include <iostream>

int main()
{
	int num;
	int count = 0;
	std::cin >> num;
	for(int i = 0; i < num; i++)
	{
		int temp;
		std::cin >> temp;
		if(temp < 0)
		{
			count++;
		}
	}
	std::cout << count << std::endl;
}