#include "adt.h"

Student * makeStudent (void) {
	Student *new = malloc(sizeof(Student));
	if (!new) return NULL;
	
	new->AR = 0;
	new->grade = 0;

	return new;
}

void destroyStudent (Student *std) {
	free(std);
}

void setAR (Student *std, unsigned int AR) {
	if (!std) return;

	std->AR = AR;
}

void setGrade (Student *std, float grade) {
	if (!std) return;

	std->grade = grade;
}

unsigned int getAR (Student *std) {
	if (!std) return 0;
	return std->AR;
}

float getGrade (Student *std) {
	if (!std) return 0;
	return std->grade;
}
