#include <iostream>
#include <string>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

void readDisk(queue<string> &q, string &ln) {
    while (true) {
        getline(cin, ln);
        if (ln.empty()) {
            q.push(ln);
            getline(cin, ln);
            if (ln.empty()) { // two blank lines in a row indicates end of input
                break;
            }
        }
        q.push(ln);
    }
}

void fixFragmentation(queue<string> &q) {
    string line;
    int line_length = 0;
    int last_index = 0;
    int stars_in_line = 0;
    int star_counter= 0;

    while (!q.empty()) {
        line = q.front();

        if (!line.empty() && line.length() > 0) {
            line_length = line.length();
            last_index = line_length - 1 - star_counter;
            stars_in_line = count(q.front().begin(), q.front().end(), '*'); // count number of '*' in given string
            star_counter += stars_in_line;
            int rangeFrom  = last_index - stars_in_line + 1;

            map<int, int> availableIndexes;

            for (int i = rangeFrom; i < rangeFrom + stars_in_line; ++i){
                availableIndexes[i] = 1;
            }
            for (int i = 0; i < line_length; i++){
                if(availableIndexes[i] == 1){
                    cout << "*";
                }
                else{
                    cout << ".";
                }
            }
            cout << "" << endl;
        }
        else {
            line_length = 0;
            last_index = 0;
            stars_in_line = 0;
            star_counter = 0;

            if (q.size() != 0){
                cout << "" << endl;
            }
        }
        q.pop(); //remove first string
    }
}

int main() {

    queue<string> q;
    string ln;

    readDisk(q, ln);
    fixFragmentation(q);

}