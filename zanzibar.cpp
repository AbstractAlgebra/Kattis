#include <vector>
#include <iostream>

int main()
{
	int cases = 0;
	std::cin >> cases;

	std::vector<int> output;
	int turtles = 1;
	for(int i = 0; i < cases; i++)
	{
		int count = 0;
		int newTurtles = -1;

		std::cin >> turtles;
		while(newTurtles != 0)
		{
			std::cin >> newTurtles;

			if(newTurtles > turtles)
			{
				if (newTurtles > 2*turtles)
				{
					count += newTurtles - 2*turtles;
				}
			}
			turtles = newTurtles;
		}

		output.push_back(count);
	}
	for(int i = 0; i < output.size(); i++)
	{
		std::cout << output[i] << std::endl;
	}
}