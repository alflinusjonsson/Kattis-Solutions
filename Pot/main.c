#include <stdio.h>
#include <math.h>

int main() {

    int p = 0, x = 0;

    scanf("%d", &p);

    for (int i = 0; i < p; i++){
        int number;
        scanf("%d", &number);
        x += pow(number / 10, number % 10);
    }

    printf("%d", x);
    return 0;
}
