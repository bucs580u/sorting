#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief      { Swap two integers in memory }
 *
 * @param      i     { pointer to the first integer }
 * @param      j     { pointer to the second integer }
 */
void swap(int *i, int *j) {
  int temp = *i;
  *i = *j;
  *j = temp;
}

/**
 * @brief      Initializes an array of the given size.
 *
 * @param[in]  sz    The size
 *
 * @return     { An array of size \p sz, whose values are 0, 1, 2, ..., sz -1 }
 */
int* initialize(size_t sz){
  int *arr = (int *)malloc(sz * sizeof(int));
  for (size_t i = 0; i < sz; i++)
    arr[i] = i;
  return arr;
}

/**
 * @brief      { Shuffle a given array using Fisher–Yates shuffle Algorithm }
 *
 * @param      arr   The arr to be shuffled
 * @param[in]  sz    The size of arr
 */
void shuffle(int arr[], size_t sz){
  // seed the random number generator
  srand (time(NULL));

  // shuffle from tail to head
  for (int i = sz-1; i > 0; i--) {
        // Pick a random index from 0 to i
        int j = rand() % (i+1);
 
        // Swap arr[i] with the element at random index
        swap(&arr[i], &arr[j]);
    }
}

/**
 * @brief      Print the repl of an array
 *
 * @param      arr   The arr
 * @param[in]  sz    The size
 */
void print(int arr[], size_t sz) {
  if (sz > 1) {
    printf("{%d,", arr[0]);
    for (size_t i = 1; i <= sz - 2; i++) {
      printf(" %d,", arr[i]);
    }
    printf(" %d}\n", arr[sz - 1]);
  } else if (sz == 1) {
    printf("{%d}\n", arr[0]);
  } else
    printf("{}\n");
}

int main(void) {
  size_t sz = 16;

  int *arr = initialize(sz);
  print(arr, sz);
  shuffle(arr, sz);
  print(arr, sz);
  return 0;
}