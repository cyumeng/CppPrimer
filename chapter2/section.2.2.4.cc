#include <iostream>
// Program for illustration purposes only: It is bad style for a function
// to use a global variable and also define a local variable with the same name
int reused = 42;	// reused has global scope
int main()
{
	int unique = 0;	// unique has block scope
	// uses global reused
	std::cout << reused << " " << unique << std::endl;
	int reused = 0;	// local object named reused, hides global resued
	// uses local reused
	std::cout << reused << " " << unique << std::endl;
	// explicitly requests the global reused
	std::cout << ::reused << " " << unique << std::endl;

	return 0;
}
