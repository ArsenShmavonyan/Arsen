#include <iostream>
#include <string>

std::string big_small(std::string& str)
{
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		else {
			str[i] -= 32;
		}
	}
	return str;
}
int main ()
{
	std::string str;
	std::cin >> str;
	std::cout << big_small(str);
}
