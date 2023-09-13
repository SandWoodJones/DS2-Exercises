#include "pointers-dynAlloc.h"
#include "recursion.h"

enum Problems {
	PRINT_REVERSE,
	SIZE_OF_STRING,
	ARRAY_UNION,

	SUM_INTERVAL,
	FACTORIAL,
	EXPONENTIATION,
	LINEAR_SEARCH,
	INVERT_ARRAY,
	IS_PALINDROME,
	FIND_SMALLEST
};

int main () {
	enum Problems selected = FIND_SMALLEST;
	int A, B;
	unsigned int C;

	char *S;

	int X[] = {54, 12, 45, 6, 78, 45, 6, 67};

	switch(selected) {
		case PRINT_REVERSE:
			while(!scanf("%d", &A));
			print_reverse(A);
			break;

		case SIZE_OF_STRING:
			S = read_string();
			printf("%u", size_of_string(S));
			free(S);
			break;

		case ARRAY_UNION:
			int Y[] = {11, 0, 12};

			int *R = array_union(X, 8, Y, 3, &C);

			for (unsigned int i = 0; i < C; i++) printf("%d ", R[i]);
			printf("\n");
			
			free(R);
			break;

		case SUM_INTERVAL:
			while(!scanf("%d%d", &A, &B));
			printf("%d\n", sum_interval(A, B));
			break;

		case FACTORIAL:
			while(!scanf("%d", &A));
			printf("%d\n", factorial(A));
			break;

		case EXPONENTIATION:
			while(!scanf("%d%u", &A, &C));
			printf("%d\n", exponentiation(A, C));
			break;

		case LINEAR_SEARCH:
			printf("%d\n", linear_search(X, 6, 0, 7));
			break;

		case INVERT_ARRAY:
			invert_array(X, 0, 7);

			for (unsigned int i = 0; i < 8; i++) printf("%d ", X[i]);
			break;

		case IS_PALINDROME:
			S = read_string();
			C = size_of_string(S);
			lower_string(S, 0, C);

			is_palindrome(S, 0, C - 1) ? printf("IS PALINDROME\n") : printf("NOT PALINDROME\n");

			free(S);
			break;

		case FIND_SMALLEST:
			C = find_smallest(X, 0, 7);
			printf("%u:%d\n", C, X[C]);
	}
}
