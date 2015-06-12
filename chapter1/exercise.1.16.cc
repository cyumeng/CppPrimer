// Prints the sum of a set of integers read from cin
#include <iostream>
int main()
{
	int sum = 0;

	std::cout << "Enter a set of integers:" << std::endl;
	for (int temp = 0; std::cin >> temp;)
		sum += temp;
	std::cout << "The sum is " << sum << std::endl;

	return 0;
}
