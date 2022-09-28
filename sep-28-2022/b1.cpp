#include <iostream>
#include <string>
std::string toUpperCase(std::string& str)
{
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 97)
		{
			str[i] -= 32;
		}
	}
	return str;
}

int main ()
{
	std::string str;
	std::cout << "put your name" << std::endl;
	std::cin >> str;
	
	std::cout << toUpperCase(str);
}
