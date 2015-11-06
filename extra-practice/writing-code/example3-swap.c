#include <stdio.h>


void swap(int *a, int *b){
  // hold the values of a and b, since we will not have them
  // once we begin reassignment of values.
  int a_val = *a;
  int b_val = *b;

  // reassign the values of a to b, and b to a using the
  // above values that we stored
  *a = b_val;
  *b = a_val;
}

int main(){
  // define our initial values
  int a = 5;
  int b = 10;

  // display pre-swap values
  printf("values before swap:\n");
  printf("\ta: %d\n", a);
  printf("\tb: %d\n", b);

  // swap the variable values from a to b, and b to a.
  // note that these variables are passed by reference, not
  // value.
  swap(&a, &b);

  // display the values post-swap
  printf("values after swap:\n");
  printf("\ta: %d\n", a);
  printf("\tb: %d\n", b);

  return 0;
}
