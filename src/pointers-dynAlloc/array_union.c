#include "pointers-dynAlloc.h"

/* Problem 5 - Write a function that takes 2 arrays (A1, A2) and their sizes (N1, N2), and returns a pointer to a third array (V3)
 *             that stores the union A1 U A2. Finally return V3 and, in a variable passed as reference, store N3 = N1 + N2.
 *                  Input:                              Output:
 *                      A1 = {11, 13, 45, 7}                V3 = {11, 13, 45, 7, 24, 4, 16, 81, 10, 12}
 *                      A2 = {24, 4, 16, 81, 10, 12} */

int * array_union (int *A1, unsigned int N1, int *A2, unsigned int N2, unsigned int *N3) {
    if (!A1 || N1 == 0) {
        *N3 = N2;
        return A2;
    } else if (!A2 || N2 == 0) {
        *N3 = N1;
        return A1;
    }

    if (!N3) {
        fprintf(stderr, "Argument is null\n");
        exit(1);
    }
    
    *N3 = N1 + N2;
    int *A3 = (int *) malloc(sizeof(int) * *N3);
    if (!A3) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    for (unsigned int i = 0; i < N1; i++) *(A3 + i) = *(A1 + i);

    for (unsigned int j = 0; j < N2; j++) *(A3 + j + N1) = *(A2 + j);

    return A3;
}
