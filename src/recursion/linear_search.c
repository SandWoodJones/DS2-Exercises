#include "recursion.h"

// Given an unordered array, write a recursive function that, returns an index to a given element if it is present in the array, or -1 if it is not.

int linear_search (int *V, int X, unsigned int H, unsigned int T) {
    if (!V) {
        fprintf(stderr, "Argument is null\n");
        exit(1);
    }

    if (V[H] == X) return H;
    if (H == T) return -1;
    return linear_search(V, X, H + 1, T);
}
