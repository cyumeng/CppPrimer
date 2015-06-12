// Print each number in the rang specified by the two integers inputed
#include <iostream>
int main()
{
	int start, end, temp;

	std::cout << "Enter two integers: ";
	std::cin >> start >> end;
	if (end < start) 
	{
		temp = start;
		start = end;
		end = temp;
	}
	temp = start;
	while (temp <= end)
		std::cout << temp++ << " ";
	std::cout << std::endl;

	return 0;
}
