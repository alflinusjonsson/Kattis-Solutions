#include <iostream>

int main() {

	int hours, minutes;
	std::cin >> hours >> minutes;
	minutes -= 45;
	
	if (minutes < 0)
	{
		hours -= 1;
		minutes += 60;
	}
	if (hours < 0)
		hours = 23;

	std::cout << hours << " " << minutes << std::endl;
	return 0;
}