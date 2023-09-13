#include "recursion.h"

// Problem 7 - Write a recursive function to find the smallest element in an array

unsigned int find_smallest (int *V, unsigned int h, unsigned int t) {
	if (h == t) return h;

	unsigned int m = (h + t) / 2.0;

	unsigned int m1 = find_smallest(V,  h , m);
	unsigned int m2 = find_smallest(V, m+1, t);

	if (V[m1] <= V[m2]) return m1;

	return m2;
}
