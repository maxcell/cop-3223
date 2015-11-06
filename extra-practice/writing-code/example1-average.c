#include <stdio.h>

#define ARRAY_SIZE 5


float mean(int array[], int length){
  //initialize the result to 0
  float result = 0;
  int i;

  // sum the elements in the array
  for (i=0;i < length; i++){
    result += array[i];
  }

  // divide by the number of elements since it's the average
  return result / length;
}

int main(){
  // initialize the array with 5's
  int my_array[ARRAY_SIZE] = {5};
  float my_array_average;

  // pass the array and array size. Note no & needed on the
  // my_array parameter since arrays are stored as reference
  // to the position of the first element already.
  my_array_average = mean(my_array, ARRAY_SIZE);

  //output the average
  printf("my_array_average: %f\n", my_array_average);


  return 0;
}
