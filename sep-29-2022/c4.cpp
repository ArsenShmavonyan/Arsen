#include <iostream>

void memcpy(char* srv, char* dest,size_t count)
{
	for (int i = 0; i < count; ++i)
	{
		dest[i] = srv[i];
	}
	return;
}
int main ()
{
	char srv[] = "hello";
	int size = 6;
	char dest[size];
	memcpy(srv,dest,size);
	for (int i = 0; i < size; ++i)
	{
		std::cout << dest[i];
	}
}
