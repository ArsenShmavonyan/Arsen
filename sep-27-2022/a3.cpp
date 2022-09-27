#include <iostream>
#include <string>

std::string trim(std::string& str)
{
	int size = 0;
	while (str[size] != '\0')
	{
		++size;
	}
	std::string my_str;
	int count1 = 0;
	for (int i = 0; i < size; ++i)
	{
		if (str[i] != ' ')
		{
			break;
		}
		++count1;
	}
	int count2 = 0;
	for (int i = size - 1; i >= 0; --i)
	{
		if (str[i] != ' ')
		{
			break;
		}
		++count2;
	}
	for (int i = count1; i < size - count2; ++i)
	{
		my_str.push_back(str[i]);
	}
	str = my_str;
	return str;
}
int main ()
{
	std::string str;
	std::getline(std::cin,str);
	std::cout << trim(str);
}
