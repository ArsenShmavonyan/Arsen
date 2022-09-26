#include <iostream>
 int main ()

{
	const int size = 5;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		std::cin>>arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		std::cout<<arr[i];
	}
}
