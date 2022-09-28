#include <iostream>
#include <string>

bool startsWith(const std::string& str,const std::string& str1)
{
	for (int i = 0; i < str1.size(); ++i)
	{
		if (str[i] != str1[i])
		{
			return false;
		}
	}
	return true;
}
int main ()
{
	std::string str;
	std::cout << "put your name" <<std::endl;
	std::cin >> str;

	std::string str1;
	std::cout << "put your second name" << std::endl;
	std::cin >> str1;
	
	std::cout << startsWith(str,str1);
}
