// Use the decrement operator to write a while that prints the numbers from ten down to zero.
#include <iostream>
int main()
{
	int num = 10;

	while (num > -1)
		std::cout << num-- << " ";
	std::cout << std::endl;

	return 0;
}
