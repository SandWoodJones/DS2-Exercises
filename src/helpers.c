#include "ds2-exercises.h"
#include <string.h>

char * read_string (void) {
	char *S = (char *) malloc(sizeof(char) * MAX_STRING_SIZE);
	if (!S) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	
	S = fgets(S, MAX_STRING_SIZE, stdin);
	if (!S) {
		fprintf(stderr, "Stream reading failed\n");
		exit(1);
	}
	
	// strip \n from string
	S[strcspn(S, "\r\n")] = '\0';
	
	return S;
}

void lower_string (char *S, unsigned int H, unsigned int T) {
	if (!S) {
		fprintf(stderr, "Argument is null\n");
		exit(1);
	}
	
	for (unsigned int i = H; i < T; i++) S[i] = S[i] >= 'A' && S[i] <= 'Z' ? S[i] + 32 : S[i];
}
