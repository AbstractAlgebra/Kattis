#include <vector>
#include <algorithm>
#include <iostream>	

int main()
{
	int first,second,third;
	std::cin >> first >> second >> third;
	std::vector<int> data;
	data.push_back(first);
	data.push_back(second);
	data.push_back(third);

	std::sort(data.begin(),data.end());

	std::string order;
	std::getline(std::cin,order);
	std::getline(std::cin,order);

	std::vector<int> output;
	for(int i = 0; i < data.size(); i++)
	{
		output.push_back(data[order[i]-'A']);
	}

	for(int i = 0; i < output.size(); i++)
	{
		std::cout << output[i] << " ";
	}
	std::cout << std::endl;

}