#include <iostream>
#include <string>

void foo(std::string str1,std::string str2)
{
/*	int size1 = 0;
	while (str1[size1] != '\0')
	{	
		++size1;
	}
	int size2;
	while (str2[size2] != '\0')
	{	
		++size2;
	}*/
	int size1 = str1.size();
	int size2 = str2.size();
	std::string my_str;
	int k = 0;
	for (int i = 0; i < size1; ++i)
	{
		bool b = false;
		for (int j = 0; j < size2; ++j)
		{
			if (str1[i] == str2[j])
			{
				my_str.push_back(' ');
				++k;
				b = true;
			}
		}
		if (b == false)
		{
			my_str.push_back(str1[i]);
			++k;
		}
	}
	std::cout << my_str;
}
		
int main ()
{
	std::string str1;
	std::cout << "put name" << std::endl;
	std::cin >> str1;
	
	std::string str2;
	std::cout << "put bajanich" << std::endl;
	std::cin >> str2;
	
	foo(str1,str2);
}
