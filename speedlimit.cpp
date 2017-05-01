#include <iostream>
#include <vector>

int main()
{
	std::vector<int> distances;
	int x;
	while(std::cin >> x  && x != -1)
	{
		std::vector<int> times;
		std::vector<int> kms;
		int numLogs;
		for(int i =0; i < x; i++)
		{
			int km, time;
			std::cin >> km >> time;
			kms.push_back(km);
			times.push_back(time);
		}

		int distance = 0;
		for(int i = 0; i < times.size(); i++)
		{
			if(i == 0)
			{
				distance += times[0] * kms[i]; 
			}
			else
			{
				distance += (times[i]-times[i-1]) * kms[i];
			}
		}
		distances.push_back(distance);

	}
	for(int i = 0; i < distances.size(); i++)
	{
		std::cout << distances[i] << " miles" << std::endl;
	}

}