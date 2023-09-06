#include <stdio.h>
#include <stdlib.h>

int print_reverse(int n) {
	int *v = malloc(sizeof(int) * n);
	if (!v) return 1;

	for (int i = n; i > 0; i--) {
		scanf("%d", (v+i));
	}

	for (int i = 0; i < n; i++) printf("%d\n", *(v+i));

	return 0;
}

int main() {
	print_reverse(5);
}
