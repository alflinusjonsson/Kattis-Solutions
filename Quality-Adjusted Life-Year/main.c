#include <stdio.h>

int main() {

    int periods;
    scanf("%d", &periods);

    float q1, q2;
    float QALY = 0;

    for (int i = 0; i < periods; i++){
        scanf("%f %f", &q1, &q2);
        QALY += q1 * q2;
    }

    printf("%f", QALY);

    return 0;
}
