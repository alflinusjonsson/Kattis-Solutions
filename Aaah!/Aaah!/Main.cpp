#include <iostream>
#include <string>
#include <algorithm>

int main() {

	std::string jon, doctor;
	std::getline(std::cin, jon);
	std::getline(std::cin, doctor);

	int aJon = std::count(jon.begin(), jon.end(), 'a');
	int aDoctor = std::count(doctor.begin(), doctor.end(), 'a');

	if (aDoctor > aJon) {
		std::cout << "no" << std::endl;
	}
	else
		std::cout << "go" << std::endl;
}