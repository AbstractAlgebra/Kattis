#include <iostream>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
int main()
{
	
	int lines;
	std::cin >> lines;
	std::vector<std::string> data;
	std::string temp;
	std::getline(std::cin, temp);
	for(int i = 0; i < lines; i++)
	{
		std::string li;
		std::getline(std::cin, li);
		data.push_back(li);
	}

	for(int i = 0; i < data.size(); i++)
	{
		char* cstr = new char [data[i].length()+1];
		std::strcpy(cstr,data[i].c_str());
		std::string eligibility;

		//parse name
		std::string token = strtok(cstr," ");
		std::string name = token;

		token = strtok(NULL,"/");

		cstr = new char [token.length()+1];
		std::strcpy(cstr,token.c_str());
		//parse when studies started
		if(atoi(cstr) >= 2010)
		{
			eligibility = "eligible";
			std::cout << name << " " << eligibility << std::endl;
			continue;
		}

		token = strtok(NULL," ");
		
		//parse birthday
		token = strtok(NULL,"/");

		cstr = new char [token.length()+1];
		std::strcpy(cstr,token.c_str());

		if(atoi(cstr) >= 1991)
		{
			eligibility = "eligible";
			std::cout << name << " " << eligibility << std::endl;
			continue;
		}
		token = strtok(NULL," ");
		token = strtok(NULL, "\n");

		//parse courses
		cstr = new char [token.length()+1];
		std::strcpy(cstr,token.c_str());

		if (atoi(cstr) > 40)
		{
			eligibility = "ineligible";
			std::cout << name << " " << eligibility << std::endl;
			continue;
		}


		eligibility = "coach petitions";

		std::cout << name << " " << eligibility << std::endl;

	}
	return 0;

}


