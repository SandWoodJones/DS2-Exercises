#include "pointers-dynAlloc.h"

/* Problem 3 - Write a function that reads N integers from stdinput, stores them in an array, and writes them to stdout in the reverse order:
 *  Input:                  Output:
 *      v1 = {10, 20, 30}       v1 = {30, 10, 20 */

void print_reverse (int N) {
    int *arr = (int *) malloc(sizeof(int) * N);
    if (!arr) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < N; i++) {
        if (!scanf("%d", (arr + i))) {
            i--;
        }
    }

    for (int i = N - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }

    printf("\n");

    free(arr);
}
