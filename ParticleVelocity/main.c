#include <stdio.h>

int get_periods(int A[], int N);

int main() {

    return 0;
}

int get_periods(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int total_periods = 0;
    for (int i = 0; i < N; i++){
        for (int counter = 0; i + 2 < N && A[i + 1] - A[i] == A[i + 2] - A[i + 1]; i++){
            total_periods += ++counter;
        }
    }

    if(total_periods > 1000000000){
        return -1;
    }
    return total_periods;
}
