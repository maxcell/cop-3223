# Loops
### - Table of Contents
- [How did we do things before loops?](#example-1)
- [Printing with loops](#example-2)
- [Arithmetic computations with loops(sum)](#example-3)

Loops are *crazy*

Imagine if I wanted to print out the numbers ```0 - 9```. I could write a solution as:

#### Example 1
```c
// Objective: Print out the values from 0 - 9
#include <stdio.h>

int main(void){

    printf("The list of numbers: 0 1 2 3 4 5 6 7 8 9\n");

    // Equivalent, but just broken into two statements for
    // readability sake.
    printf("The list of numbers: ");
    printf("0 1 2 3 4 5 6 7 8 9\n");


    return 0;
}
```

So, sure this is nice to do when you have it on a small scale, but what if I wanted to have the values `0 - 1,000,000`. Doing that by hand would be rather difficult. So loops actually allow us to intuitively solve this problem with less work:

#### Example 2
```c
// Objective: Print out the values from 0 - 9
#include <stdio.h>

int main(void){

    int i;      // Don't forget your counter declaration
    printf("The list of numbers: ");
    for(i = 0; i < 1000000; i++){
        printf("%d", i);
        if(i == 1000000 - 1) printf("\n");      // This just guarantees our last value will printout with a newline
        else printf(" ");
    }
    return 0;
}
```

But sure, we can print out numbers as much as we want but we want to do some cool things with them. Let's take this for instance:

#### Example 3
```c
// Objective: Take the sum from 0 to an end based on user's input
// ASSUME THAT INPUT IS NONNEGATIVE
#include <stdio.h>

int main(void){
    int i;          // Counter

    int end;        // Will represent our ending index
    int sum = 0;    // Will record our sum

    // Prompt the user to give us a starting value
    printf("So what sum do you want to compute to?\n");

    // Scan in the user's place to end
    scanf("%d", &end);
    for( i = 0; i <= end; i++ ){
        sum += i;
    }

    printf("The sum from 0 to %d is: %d\n", end, sum);

    return 0;
}
```

If we run this and I want to compute the sum from `0 to 6`, we see:
```
So what sum do you want to compute to?
6
The sum from 0 to 6 is: 21
```
