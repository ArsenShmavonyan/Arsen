#include <iostream>

void cikl(int num)
{
	if (num < 0)
	{
		return;
	}
	std::cout << num << std::endl;
	return cikl(num - 1);
}
void cikl_bac(int num)
{
	if (num > 0)
	{
		return;
	}
	std::cout << num << std::endl;
	return cikl_bac(num +1);
}
int main ()
{
	int num;
	std::cout << "put num" << std::endl;
	std::cin >> num;
	std::cout << "your answer" << std::endl;
	if (num >= 0)
	{
		cikl(num);
	}
	else {
		cikl_bac(num);
	}
}	

