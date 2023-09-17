#ifndef SEARCH_DS2
#define SEARCH_DS2

#include "ds2-exercises.h"

/* Exercise 1 - Write the iterative binary and linear search functions. As input, use a vector of 1000 random integers from 0 to 5000 (with no repeated values).
 * Compare the execution time of both algorithms */

unsigned int * createRandomArray (void);

int it_linearSearch (unsigned int *, unsigned int, unsigned int, unsigned int);
int it_binarySearch (unsigned int *, unsigned int, unsigned int, unsigned int);

// Exercise 2 - Write the recursive version of these functions.

int rc_linearSearch (unsigned int *, unsigned int, unsigned int, unsigned int);
int rc_binarySearch (unsigned int *, unsigned int, unsigned int, unsigned int);

#endif
