#include "pointers-dynAlloc.h"
#include "recursion.h"
#include "adt.h"
#include "search.h"

int main () {
	srand(1);

	unsigned int *arr = createRandomArray();

	int index = rc_binarySearch(arr, 0, 999, 3909);

	printf("%u: %d\n", index, arr[index]);

	free(arr);
}
