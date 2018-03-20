#include <vector>
#include <iostream>

int main()
{
	int cents = 1;
	int dollars = 1;
	int limit = 100;

	for(int cents = 0; cents < limit; cents++)
	{
		for(int dollars = 0; dollars < limit; dollars++)
		{
			int newCents = dollars;
			int newDollars = cents;
			newCents -= 5;

			if((cents+(dollars*100))*2 == newCents+(newDollars*100))
			{
				std::cout << "$" << dollars << "." << cents << std::endl;
			}
		}
	}
}

// $63.31

// 63.26

// 31.58


