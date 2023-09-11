#include "pointers-dynAlloc.h"

// Problem 4 - Write a function that calculates the size of a string using only pointers.

unsigned int size_of_string (char *S) {
	if (!S) return 0;
	
	for (unsigned int res = 0; res < MAX_STRING_SIZE; res++) {
		if (S[res] == '\0') return res;
	}

	return MAX_STRING_SIZE;
}
