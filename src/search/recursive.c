#include "search.h"

int rc_linearSearch (unsigned int *arr, unsigned int h, unsigned int t, unsigned int x) {
	if (!arr || h > t) return -1;
	if (arr[h] == x) return h;

	return rc_linearSearch(arr, h + 1, t, x);
}

int rc_binarySearch (unsigned int *arr, unsigned int h, unsigned int t, unsigned int x) {
	if (!arr || h > t) return -1;

	unsigned int middle = h + (t - h) / 2;
	
	if (arr[middle] == x) return middle;

	if (arr[middle] < x) return rc_binarySearch(arr, middle + 1, t, x);
	return rc_binarySearch(arr, h, middle - 1, x);
}
