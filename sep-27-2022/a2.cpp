#include <iostream>
#include <string>

std::string rtrim(std::string str)
{
	int size = 0;
	while (str[size] != '\0')
	{
		++size;
	}
	int avart = 0;
	for (int i = 0; i < size; ++i)
	{
		if (str[i] != ' ')
		{
			avart = i;
			break;
		}	
	}
	std::string str2;
  	for (int i = avart; i < size; ++i) 
 	{
		str2.push_back(str[i]);
	}	
 	str = str2;
	return str;
}
	
int main ()
{
	std::string str;
	std::getline(std::cin,str);
	std::cout << rtrim(str);
}
