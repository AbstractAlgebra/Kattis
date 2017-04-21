#include <vector>
#include <iostream>
#include <queue>
int main()
{
	int h = 0;
	int w = 0;
	int n = 0;
	std::cin >> h >> w >> n;

	std::queue<int> q;
	for(int i = 0; i < n; i++)
	{
		int temp = 0;
		std::cin >> temp;
		q.push(temp);
	}

	for(int y = 0; y < h; y++)
	{
		for(int x = 0; x < w;)
		{
			if((x += q.front()) > w)
			{
				std::cout << "NO" << std::endl;
				exit(0);
			}
			q.pop();

		}
	}

	std::cout << "YES" << std::endl;

}