#include <iostream>

std::string rtrim(std::string str)
{
	int size = 0;
	while (str[size] != '\0')
	{
		++size;
	}
	std::string my_str;
	int count = 0;
	for (int i = size - 1; i >= 0; --i)
	{
		if (str[i] != ' ')
		{
			break;
		}
		++count;
	}
	for (int i = 0; i < size - count; ++i)
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
	std::string str1 = rtrim(str);
	std::cout << str1;
}
