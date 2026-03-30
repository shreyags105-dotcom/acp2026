#include <stdio.h>
#include <stdlib.h>

int* allocate_scores(int n);
void read_scores(int *arr, int n);
int calculate_total(int *arr, int n);
void display_scores(int *arr, int n);
void delete_scores(int **arr);

int main() {
    int n, total;
    int *scores = NULL;

    printf("Enter number of players:\n");
    scanf("%d", &n);

    // TODO: Handle case when n <= 0

    scores = allocate_scores(n);

    // TODO: Check if memory allocation failed

    read_scores(scores, n);
    display_scores(scores, n);

    total = calculate_total(scores, n);
    printf("Total Score: %d\n", total);

    delete_scores(&scores);

    return 0;
}

int* allocate_scores(int n) {
    int *arr = NULL;

    // TODO: Allocate memory dynamically for n scores using malloc

    return arr;
}

void read_scores(int *arr, int n) {
    // TODO: Use a loop to read n scores into the array
}

void display_scores(int *arr, int n) {
    // TODO: Use a loop to display all scores
}

int calculate_total(int *arr, int n) {
    int total = 0;

    // TODO: Use a loop to calculate total score

    return total;
}

void delete_scores(int **arr) {
    // TODO: Free allocated memory
    // TODO: Set pointer to NULL to avoid dangling pointer
}