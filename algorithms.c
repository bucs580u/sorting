#include "algorithms.h"

/**
 * @brief      { integer-width less than comparison }
 *
 * @param[in]  lhs   The left hand side
 * @param[in]  rhs   The right hand side
 *
 * @return     { returns a positive integer value if the first argument is less
 *             than the second, a negative integer value if the first argument
 *             is greater than the second and zero if the arguments are
 *             equivalent }
 */
int lt(const void *lhs, const void *rhs){
	int l = (int) *lhs;
	int r = (int) *rhs;

	return (l < r) ? 1 :
		(l == r) ? 0 : -1;
}

/**
 * @brief      { integer-width greater than comparison }
 *
 * @param[in]  lhs   The left hand side
 * @param[in]  rhs   The right hand side
 *
 * @return     { returns a negative integer value if the first argument is less
 *             than the second, a positive integer value if the first argument
 *             is greater than the second and zero if the arguments are
 *             equivalent }
 */
int gt(const void *lhs, const void *rhs){
	int l = (int) *lhs;
	int r = (int) *rhs;

	return (l > r) ? 1 :
		(l == r) ? 0 : -1; 
}

/**
 * @brief      { Insertion Sort }
 *
 * @param      ptr    The pointer to the array to sort
 * @param[in]  count  The count of elements in the array
 * @param[in]  size   The size of each element in the array in bytes
 * @param[in]  comp   Comparison function 
 */
void insertsort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *)) { return; }

/**
 * @brief      { Bubble Sort }
 *
 * @param      ptr    The pointer to the array to sort
 * @param[in]  count  The count of elements in the array
 * @param[in]  size   The size of each element in the array in bytes
 * @param[in]  comp   Comparison function 
 */
void bubblesort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *)) { return; }

/**
 * @brief      { Selection Sort }
 *
 * @param      ptr    The pointer to the array to sort
 * @param[in]  count  The count of elements in the array
 * @param[in]  size   The size of each element in the array in bytes
 * @param[in]  comp   Comparison function 
 */
void selectionsort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *)) { return; }

/**
 * @brief      { Heap Sort }
 *
 * @param      ptr    The pointer to the array to sort
 * @param[in]  count  The count of elements in the array
 * @param[in]  size   The size of each element in the array in bytes
 * @param[in]  comp   Comparison function 
 */
void heapsort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *)) { return; }

/**
 * @brief      { Quick Sort }
 *
 * @param      ptr    The pointer to the array to sort
 * @param[in]  count  The count of elements in the array
 * @param[in]  size   The size of each element in the array in bytes
 * @param[in]  comp   Comparison function 
 */
void quicksort(void *ptr, size_t count, size_t size, 
	int (*comp)(const void *, const void *)) { return; }