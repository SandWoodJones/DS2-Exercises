#include "adt.h"

DynArr * makeDynArr (void) {
	DynArr *N = malloc(sizeof(DynArr));
	if (!N) return NULL;

	N->capacity = 1;
	N->i = 0;

	N->students = malloc(sizeof(Student) * N->capacity);
	if (!N->students) return NULL;

	return N;
}

void destroyDynArr (DynArr *DA) {
	free(DA);
}

void addStudent (DynArr **DA, Student *std) {
	(*DA)->students[(*DA)->i] = *std;
	(*DA)->i++;
	if ((*DA)->i != (*DA)->capacity) return;

	(*DA)->capacity *= 2;
	(*DA)->students = realloc((*DA)->students, sizeof(Student) * (*DA)->capacity);
}

Student * searchStudent (DynArr *DA, unsigned int AR) {
	if (!DA || AR == 0) return NULL;

	Student *cur;

	for (unsigned int i = 0; i < DA->i; i++) {
		cur = (DA->students + i);

		if (getAR(cur) == AR) return cur;
	}

	return NULL;
}

void printDynArr (DynArr *DA) {
	Student *cur;

	for (unsigned int i = 0; i < DA->i; i++) {
		cur = (DA->students + i);

		printf("Student %u: %.2f\n", getAR(cur), getGrade(cur));
	}
}
