#include <iostream>
int main()
{
	int n1 = 0, n2 = 0;

	std::cout << "Input two number:";
	std::cout << std::endl;
	std::cin >> n1;
	std::cin >> n2;
	std::cout << "The multiplication of ";
	std::cout << n1;
	std::cout << " and ";
	std::cout << n2;
	std::cout << " is ";
	std::cout << n1 * n2;
	std::cout << std::endl;

	return 0;
}
