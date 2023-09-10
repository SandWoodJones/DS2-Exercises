#include "recursion.h"

/* Problem 3 - Write a recursive function to calculate exponentiations according to the equation:
 *                  X^n = X * X^{n-1}, for all n > 0. */

unsigned int exponentiation (int X, unsigned int N) {
    if (N == 0) return 1;
    return X * exponentiation(X, N - 1);
}
