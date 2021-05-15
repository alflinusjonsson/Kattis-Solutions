#include <iostream>

int main()
{
	unsigned long long int x, y;
	while (std::cin >> x >> y)
	{
		std::cout << (x < y ? y - x : x - y) << std::endl;
	}
}