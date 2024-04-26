#ifndef ALGORITHMS_H
#define ALGORITHMS_H

#include <stdlib.h> // qsort

int lt(const void *lhs, const void *rhs);
int gt(const void *lhs, const void *rhs);

void insertsort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *));
void bubblesort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *));
void selectionsort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *));
void heapsort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *));
void quicksort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *));

#endif //ALGORITHMS_H
