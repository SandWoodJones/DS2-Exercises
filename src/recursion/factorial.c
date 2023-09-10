#include "recursion.h"

/* Problem - 2 Write a function that recursively calculates a numbers' factorial, as defined by the formula:
 *                        ╭ 1            if X == 0 or X == 1
 *                   X! = ┤ 
 *                        ╰ X * (X - 1)! if X > 1 */

unsigned int factorial (unsigned int X) {
    if (X <= 1) return 1;

    return X * factorial(X - 1);
}
