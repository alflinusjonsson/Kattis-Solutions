#include <iostream>
#include <array>
#include <algorithm>

int main() {
	std::array<int, 3> numbers;
	for (int i = 0; i < 3; i++) {
		std::cin >> numbers[i];
	}

	std::sort(numbers.begin(), numbers.end());
	
	std::array<char, 3> letters;
	for (int i = 0; i < 3; i++) {
		std::cin >> letters[i];
	}

	for (int i = 0; i < 3; i++) {
		std::cout << numbers[letters[i] - 'A'] << " ";
	}
}