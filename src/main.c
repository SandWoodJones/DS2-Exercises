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
    INVERT_ARRAY
};

int main () {
    enum Problems selected = INVERT_ARRAY;
    int A, B;
    unsigned int C;

    int X[] = {1, 10, 8, 3, 7, 2, 9, 4, 5, 6};

    switch(selected) {
        case PRINT_REVERSE:
            while(!scanf("%d", &A));
            print_reverse(A);
            break;

        case SIZE_OF_STRING:
            char *S = read_string();
            printf("%u", size_of_string(S));
            free(S);
            break;

        case ARRAY_UNION:
            int Y[] = {11, 0, 12};

            int *R = array_union(X, 10, Y, 3, &C);

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
            printf("%d\n", linear_search(X, 11, 0, 9));
            break;

        case INVERT_ARRAY:
            invert_array(X, 0, 9);

            for (unsigned int i = 0; i < 10; i++) printf("%d ", X[i]);
            break;
    }
}
