#include <vector>
#include <iostream>

int digitSum(int p)
{
	int sum = 0;
	while(p != 0)
	{
		sum += p % 10;
		p /= 10;
	}
	return sum;
}

int main()
{
	int num;
	std::vector<int> output;

	while(std::cin >> num && num != 0)
	{
		int q = 11;
		while(digitSum(num*q)!= digitSum(num))
		{
			q++;
		}
		output.push_back(q);
	}

	for(int i = 0; i < output.size(); i++)
	{
		std::cout << output[i] << std::endl;
	}


}