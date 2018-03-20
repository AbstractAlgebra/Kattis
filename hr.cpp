#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>
int main()
{


	int testCases = 0;
	std::cin >> testCases;

	std::vector<float> beats;
	std::vector<float> seconds;
	
	//take input
	for(int i = 0; i < testCases; i++)
	{
		float beatsInput = 0;
		float secondsInput = 0;
		std::cin >> beatsInput >> secondsInput;
		beats.push_back(beatsInput);
		seconds.push_back(secondsInput);
	}

	std::vector<std::tuple<float,float,float>> outputs;
	
	for(int i = 0; i < testCases; i++)
	{
		const int secsPerMin = 60;
		const float p = seconds[i];
		const float b = beats[i];
		float minABPM = secsPerMin*(b-1)/p;
		float calcABPM = secsPerMin*(b/p);
		float maxABPM = secsPerMin*(b+1)/p;


		outputs.push_back(std::make_tuple(minABPM,calcABPM,maxABPM));

		int tupleSize = 3;

		std::cout << std::get<0>(outputs[i]) << " ";
		std::cout << std::get<1>(outputs[i]) << " ";
		std::cout << std::get<2>(outputs[i]);

		std::cout << std::endl;
	}


}