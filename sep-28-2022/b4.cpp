#include <iostream>
#include <string>

bool endsWith(const std::string& str1,const std::string str2)
{
	int size1 = str1.size();
	int size2 = str2.size();
	int j = 0;
	for (int i = size1 - size2;i < size1; ++i)
	{
		if (str1[i] != str2[j])
		{
			return false;
		}
		++j;
	}
	return true;	
}

int main ()
{
	std::string str1;
	std::cout << "put your name" << std::endl;
	std::cin >> str1;
	
	std::string str2;
	std::cout << "put your second world" << std::endl;
	std::cin >> str2;
	
	std::cout << endsWith(str1,str2);
}
