#include "search.h"

int it_linearSearch (unsigned int *arr, unsigned int h, unsigned int t, unsigned int x) {
	if (!arr) return -1;

	for (unsigned int i = h; i < t; i++) {
		if (arr[i] == x) return i;
	}

	return -1;
}

int it_binarySearch (unsigned int *arr, unsigned int h, unsigned int t, unsigned int x) {
	if (!arr) return -1;

	while (h <= t) {
		unsigned int middle = h + (t - h) / 2;

		if (arr[middle] == x) return middle;

		if (arr[middle] < x) h = middle + 1;
		else t = middle - 1;
	}

	return -1;
}
