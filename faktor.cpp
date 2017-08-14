//ciel(s/a) = i

// s/a = floor(i)

// s = floor(i*a)

#include <iostream>
#include <cmath>
int main()
{
	float a, i = 0;
	std::cin >> a >> i;

	for(int s = 1; s <= 10000; s++)
	{
		if(ceil((float)s/a) == i)
		{
			std::cout << s << std::endl;
			return 0;
		}
	}

}
