#include <stdio.h>

#define ARRAY_SIZE 5

int range(int array[], int length){
  int min = 0;
  int max = 0;

  int i;
  for (i=0; i < length; i++){
    // if the minimum number is larger than the value at index i
    // then we need to make the minimum number equal to this
    // value since it is our new minimum.
    if (min > array[i]){
      min = array[i];
    }

    // if the max number is less than the value at index i
    // then we need to make the max number equal to this
    // value, since it will be our new maximum.
    if (max < array[i]){
      max = array[i];
    }
  }

  // return the difference between the maximum and minimum
  // as this is our range.
  return max - min;
}

int sorted_range(int array[], int length){
  if (array[0] > array[length - 1]){
    return array[0] - array[length - 1];
  }

  if (array[0] < array[length - 1]){
    return array[length - 1] - array[0];
  }
}

int main(){
  // initialize our arrays to a range of -1 to 6 (range of 7)

  // this array is sorted from -1 to 6
  int my_min_max_sorted_array[ARRAY_SIZE] = {-1, 2, 3, 4, 6};
  // this array is sorted from 6 to -1
  int my_max_min_sorted_array[ARRAY_SIZE] = {6, 4, 3, 2, -1};
  // this array is not sorted
  int my_unsorted_array[ARRAY_SIZE] = {-1, 3, 2, 6, 4};

  int my_range;

  // assign my_range to the range of the array.
  // range() does not require the array to be sorted, so you can
  // send any array to it.
  printf("range() function results:\n");
  my_range = range(my_min_max_sorted_array, ARRAY_SIZE);
  printf("\trange of my_min_max_sorted_array: %d\n", my_range);
  my_range = range(my_max_min_sorted_array, ARRAY_SIZE);
  printf("\trange of my_max_min_sorted_array: %d\n", my_range);
  my_range = range(my_unsorted_array, ARRAY_SIZE);
  printf("\trange of my_unsorted_array: %d\n", my_range);

  // use the sorted_range function to determine the range
  // of a sorted array.
  printf("sorted_range() function results:\n");
  my_range = sorted_range(my_min_max_sorted_array, ARRAY_SIZE);
  printf("\trange of my_min_max_sorted_array: %d\n", my_range);
  my_range = sorted_range(my_max_min_sorted_array, ARRAY_SIZE);
  printf("\trange of my_max_min_sorted_array: %d\n", my_range);

  // note how this is not proper behaviour in the output.
  // this is because within the sorted_range function we
  // determine the range based on the first and last element
  // of the array.
  my_range = sorted_range(my_unsorted_array, ARRAY_SIZE);
  printf("\t(READ COMMENTS IN SOURCE) range of my_unsorted_array: %d\n", my_range);


  return 0;
}
