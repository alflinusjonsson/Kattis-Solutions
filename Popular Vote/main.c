#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }
}

int main() {

    int test_cases = 0;
    scanf("%d", &test_cases);

    while (test_cases > 0){
        int candidates = 0;
        scanf("%d", &candidates);

        int votes[10];

        for (int i = 0; i < candidates; i++) {
            int temp_votes = 0;
            scanf("%d", &temp_votes);

            votes[i] = temp_votes;
        }

        int leading_votes = 0;
        int leading_candidate = 0;
        int total_votes = 0;

        for (int i = 0; i < candidates; i++){
            if (votes[i] > leading_votes){
                leading_candidate = i;
                leading_votes = votes[i];
            }

            total_votes += votes[i];
        }

        selectionSort(votes, candidates);

        if (votes[candidates - 1] == votes[candidates - 2]) {
            printf("no winner\n");
        } else {
            total_votes -= leading_votes;
            printf(leading_votes > total_votes ? "majority " : "minority ");
            printf("winner %d\n", (leading_candidate + 1));
        }

        test_cases--;
    }

    return 0;
}
