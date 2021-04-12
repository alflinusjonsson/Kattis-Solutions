#include <iostream>
#include <string>

using namespace std;

string formatNumber(string &s) {
    string temp; // creating temporary string containing only digits
    for (char x : s){
        if (x != ' ' && x != '/' && x != '-'){
            temp += x;
        }
    }

    string ref_phone_number;
    int index = 0, counter = 0;
    int s_length = temp.length();

    for (char x : temp){
        if (counter == 0 && s_length <= 4){
            if (s_length == 3)
                ref_phone_number += temp.substr(index, 3);
            else if (s_length == 2)
                ref_phone_number += temp.substr(index, 2);
            else
                ref_phone_number += temp.substr(index, 2) + '-' + temp.substr(index+2,2);
            break;
        }

        counter++;
        ref_phone_number += x;

        if (counter % 3 == 0){
            ref_phone_number += '-';
            s_length -= counter;
            counter = 0;
        }

        index++;
    }

    return ref_phone_number;
}


