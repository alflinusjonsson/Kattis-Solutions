#include <stdio.h>

int main() {
    int test_cases = 0;
    scanf("%d", &test_cases);

    while(test_cases--){
        int power_outlets = 0, total_appliances = 0;
        scanf("%d", &power_outlets);

        total_appliances = 1- power_outlets;

        while(power_outlets--){
            int outlets = 0;
            scanf("%d", &outlets);
            total_appliances += outlets;
        }

        printf("%d\n", total_appliances);
    }

    return 0;
}
