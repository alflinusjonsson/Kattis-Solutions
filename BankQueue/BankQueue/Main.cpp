#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
	int money_;
	int time_;

	Person(int money, int time) {
		money_ = money;
		time_ = time;
	}
};

bool compareMoney(const Person& a, const Person& b) {
	return a.money_ >= b.money_;
}

void queuePerson(std::vector<int>& v, Person c) {
	int i = c.time_;

	while (i >= 0) {
		if (v[i] == 0) {
			v[i] = c.money_;
			return;
		}
		i--;
	}
}

int main() {
	int N, T, ci, ti;
	int maximum_amount = 0;
	int i = 0;

	std::cin >> N >> T;
	std::vector<int> bQueue(T);
	std::vector<Person> money_;

	for (int i = 0; i < N; i++) {
		std::cin >> ci >> ti;
		Person c(ci, ti);
		money_.push_back(c);
	}

	std::sort(money_.begin(), money_.end(), compareMoney);

	while (i < money_.size()) {
		queuePerson(bQueue, money_[i]);
		i++;
	}

	for (int i = 0; i < bQueue.size(); i++) {
		maximum_amount += bQueue[i];
	}

	std::cout << maximum_amount;
}