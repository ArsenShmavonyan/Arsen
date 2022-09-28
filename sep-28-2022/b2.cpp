#include <iostream>
#include <string>

std::string toLowerCase(std::string& str)
{
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	}
	return str;

}
int main ()
{
	std::string str;
	std::cout << "put your name" << std::endl;
	std::cin >> str;
		
	std::cout << toLowerCase(str);
}
