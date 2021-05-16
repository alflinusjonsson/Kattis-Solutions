#include <iostream>
#include <string>

int main() {
	std::string name;
	std::getline(std::cin, name);
	std::cout << (char)toupper(name[0]);
	for (int i = 0; i < name.length() - 1; i++) {
		if (name[i] == '-' || name[i] == '\n') {
			std::cout << "" << (char)toupper(name[i + 1]);
		}
	}
}