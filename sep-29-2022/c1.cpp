#include <iostream>
#include <string>

int lastIndexOf(const std::string& str1, const std::string& str2)
{
	for (int i = str1.size() - 1; i >= 0; --i)
	{
		bool vorosh = false;
		int count = 0;  
		for (int j = str2.size() - 1, k = i; j >= 0; --j, --k)
		{
			if (str1[k] != str2[j])
			{
				vorosh = false;
				break;
			}
			else {
				vorosh = true;
				++count;
			}
		}
		if (vorosh == true)
		{
			return i - count + 1;
		}
	}
	return -1;
}
			
int main ()
{
	std::string str1;
	std::getline (std::cin, str1);
	std::string str2;
	std::cin >> str2;

	std::cout << lastIndexOf(str1, str2);
}
