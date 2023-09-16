#include "adt.h"

/* Write a student registration program. Each student is identified by their RA and grade. Users register students until they enter RA zero, concluding data input.
 * Use a dynamic array that automatically doubles in size when it reaches capacity. Implement the operations:
*		(a) Insert student
*		(b) Search student
*		(c) Print registered students
*		(d) Print a student's grade
*		(e) Print a student's AR */

void student_register (void) {
	unsigned int AR;
	float grade;

	DynArr *arr = makeDynArr();

	Student *std = NULL;

	while (1) {
		printf("Add new student:\nAR: ");
		while (!scanf("%u", &AR));
		if (AR == 0) break;

		printf("Grade: ");
		while (!scanf("%f", &grade));

		std = makeStudent();
		setAR(std, AR);
		setGrade(std, grade);

		addStudent(&arr, std);
	}
	
	printDynArr(arr);
}
