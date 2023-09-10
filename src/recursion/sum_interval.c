#include "recursion.h"

/* Problem 1 - Given 2 integers, write a recursive function that sums all values in the range bound by them. */

int sum_interval (int M, int N) {
    if (M < N) return M + sum_interval(M + 1, N);
    if (M > N) return N + sum_interval(M, N + 1);
    return M;
}
