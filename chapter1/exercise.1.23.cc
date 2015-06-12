#include <iostream>
#include "Sales_item.h" 

int main()
{
	Sales_item prevItem, curItem;

	if (std::cin >> prevItem) {
		int count = 1;
		while (std::cin >> curItem) {
			if (curItem.isbn() == prevItem.isbn())
				count++;
			else {
				std::cout << count 
					<< " transactions occur for ISBN: "
					<< prevItem.isbn() 
					<< std::endl;
				prevItem = curItem;
				count = 1;
			}
		}
		std::cout << count 
			<< " transactions occur for ISBN: "
			<< prevItem.isbn() 
			<< std::endl;
	}

	return 0;
}
