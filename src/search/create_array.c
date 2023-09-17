#include "search.h"

unsigned int * createRandomArray () {
	unsigned int *arr = malloc(sizeof(unsigned int) * 5000);
	if (!arr) return NULL;

	for (int i = 0; i < 5000; i += 5) {
		arr[(i / 5)] = (rand() % 5) + i;
	}

	return arr;
}
