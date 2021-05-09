#include <iostream>
#include <set>
using namespace std;

int main() {

    int jackCDs;
    int jillCDs;
    cin >> jackCDs;
    cin >> jillCDs;

    while (jackCDs > 0 || jillCDs > 0) {
        unordered_set<int> set;
        int nCD;
        for (int i = 0; i < jackCDs; i++) {
            cin >> cd;
            set.insert(cd);
        }

        int count = 0;

        for (int i = 0; i < jillCDs; i++) {
            cin >> cd;
            if (set.count(cd)) {
                count++;
            }
        }

        cout << count << endl;
        cin >> jackCDs;
        cin >> jillCDs;
    }

    return 0;
}