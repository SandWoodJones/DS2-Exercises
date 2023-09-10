#include "recursion.h"

// Problem 5 - Write a recursive function that inverts an array.

void invert_array (int *V, unsigned int T, unsigned int H) {
    if (!V) {
        fprintf(stderr, "Argument is null\n");
        exit(1);
    }

    if (T > H) return;

    int temp = V[T];
    V[T] = V[H];
    V[H] = temp;

    invert_array(V, T + 1, H - 1);
}
