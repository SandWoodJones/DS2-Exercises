#include "recursion.h"

bool is_palindrome (char *S, int H, int T) {
	if (!S) return true; // an empty string is also a palindrome.
	
	if (H > T) return true;

	if (S[H] != S[T]) return false;
	
	return is_palindrome(S, H + 1, T - 1);
}
