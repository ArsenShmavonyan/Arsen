#include <iostream>

void memset(char* ptr, char value,size_t count)
{
	for (int i = 0; i < count; ++i)
	{
		ptr[i] = value;
	}
	return;
}
int main ()
{
	int size;
	std::cout << "put your size" << std::endl;
	std::cin >> size;
	
	char* ptr = new char[size];
	
	char value;
	std::cout << "put value" << std::endl;
	std::cin >> value;

	size_t count;
	std::cout << "put count" << std::endl;
	std::cin >> count;
	
	memset(ptr,value,count);
	
	delete[] ptr;
	ptr = nullptr;
}
