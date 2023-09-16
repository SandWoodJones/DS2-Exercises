#ifndef ABSTRACT_DATA_TYPES_DS2
#define ABSTRACT_DATA_TYPES_DS2

#include "ds2-exercises.h"

typedef struct {
	unsigned int AR;
	float grade;
} Student;

Student * makeStudent (void);
void destroyStudent (Student *);
void setAR (Student *, unsigned int);
void setGrade (Student *, float);
float getGrade (Student *); // (d)
unsigned int getAR (Student *); // (e)

typedef struct {
	Student *students;
	unsigned int capacity;
	unsigned int i;
} DynArr;

DynArr * makeDynArr (void);
void destroyDynArr (DynArr *);
void addStudent (DynArr **, Student *); // (a)
Student * searchStudent (DynArr *, unsigned int); // (b)
void printDynArr (DynArr *); // (c)

void student_register (void);

#endif
