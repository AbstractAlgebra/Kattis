#include <iostream>
#include <vector>

int main()
{
	std::vector<int> input;
	for(int i =0; i < 6; i++)
	{
		int temp;
		std::cin >> temp;
		input.push_back(temp); 
	}

	std::vector<int> proper;
	proper.push_back(1);
	proper.push_back(1);
	proper.push_back(2);
	proper.push_back(2);	
	proper.push_back(2);
	proper.push_back(8	);	

	for(int i = 0; i < input.size(); i++)
	{
		input[i] = proper[i] - input[i]; 
		std::cout << input[i] << " ";
	}
}