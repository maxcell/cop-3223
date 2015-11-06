# Arrays
### Table of Contents
- [How did we do things before Arrays?](#how-did-we-do-things-before-arrays)
    - [Example 1](#example-1)
- [Power of Arrays](#power-of-arrays)
    - [Example 2](#example-2)
- [Breaking Down Arrays](#breaking-down-arrays)
    - [Example 3](#example-3)
-  [Cool Stuff with Arrays](#cool-stuff-with-arrays)
    - [Example 4](#example-4)
    - [Example 5](#example-5)
- [Common Pitfalls](#common-pitfalls)

### How did we do things before Arrays?
Arrays are very useful for us. We have the ability to store a ton of data in one structure while being able to access it effortlessly. Imagine if we had no arrays at all.
#### Example 1
```c
// Objective: Print out the temperatures of each day
#include <stdio.h>

int main(void){

    int day_1 = 78, day_2 = 76, day_3 = 70,
    day_4 = 79, day_5 = 69, day_6 = 75,
    day_7 = 72, day_8 = 71, day_9 = 73, day_10 = 71;

    printf("Day 1: %d degrees\n",day_1);
    printf("Day 2: %d degrees\n",day_2);
    printf("Day 3: %d degrees\n",day_3);
    printf("Day 4: %d degrees\n",day_4);
    printf("Day 5: %d degrees\n",day_5);

    printf("Day 6: %d degrees\n",day_6);
    printf("Day 7: %d degrees\n",day_7);
    printf("Day 8: %d degrees\n",day_8);
    printf("Day 9: %d degrees\n",day_9);
    printf("Day 10: %d degrees\n",day_10);


    return 0;
}
```

### Power of Arrays
As you saw above, having to keep of these pieces of data can get rather lengthy. But we know that this data is all the same, so why not put it into one structure.

#### Example 2
```c
// Objective: Print out the temperatures of each day
#include <stdio.h>

int main(void){

    int i;
    int day[10] = { 78, 76, 70, 79, 69, 75, 72, 71, 73, 71 };

    for(i = 0; i < 10; i++){
        printf("Day %d: %d degrees\n", i + 1, day[i]);
    }

    return 0;
}
```
And with arrays we know that we can also utilize looping structures to access all of the pieces that we would want.

### Breaking Down Arrays
Let's take a look at the pieces that make an array:

`int days[100]`

1. `int` tells us what the type of data is being stored into our array. This can be any type such as `char`, `float`, and more (but that you will learn about later on).
2. `days` indicates our variable name, whenever we reference a particular array, we need to be sure to always have the name around because the next part,
3. `[100]` indicates our maximum size. The important feature of an array is that it is fixed in size. **You should not use an array that doesn't have a specific size declared.**

#### Example 3
```c
#include <stdio.h>

int main(void){

    int days[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    printf("The 1st value in our array is: %d\n", days[0]);
    printf("The last value in our array is: %d\n", days[9]);
    return 0;
}
```

### Cool Stuff with Arrays
Well, we kind of understand what we have here now. But let's keep playing around with it.

#### Example 4
```c
// Objective: take the contents of an array and multiply it by a number
#include <stdio.h>
int main(void){
    int i;
    int multiplier;
    int numbers[5] = { 1, 2, 3, 4, 5};

    // Print out the original array
    printf("Original Array: [");
    for(i = 0; i < 5; i++){

        printf("%d", numbers[i]);
        if(i < 5 - 1) printf(", ");     // Make it print out a space
                                        // after every number except the last
    }
    printf("]\n");                      // Last number has a newline instead

    // Figure out what the user wants to multiply by
    printf("What do you want to multiply the array by?\n");
    scanf("%d", &multiplier);

    // Using this array to store our multiplied values
    int multiplied_numbers[5];

    // Multiplying the components
    for(i = 0; i < 5; i++){
        multiplied_numbers[i] = numbers[i] * multiplier;
    }

    printf("Multiplied Array: [");
    for(i = 0; i < 5; i++){

        printf("%d", multiplied_numbers[i]);
        if(i < 5 - 1) printf(", ");     // Make it print out a space
                                        // after every number except the last
    }
    printf("]\n");                      // Last number has a newline instead

   return 0;
}
```

#### Example 5
```c
// Objective: sum the numbers within an array
#include <stdio.h>

int main(void){
    int i, sum = 0;
    int numbers[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    // Print out the original array
    printf("Original Array: [");
    for(i = 0; i < 10; i++){

        printf("%d", numbers[i]);
        if(i < 10 - 1) printf(", ");     // Make it print out a space
                                        // after every number except the last
    }
    printf("]\n");                      // Last number has a newline instead

    for( i = 0; i < 10; i++ ){
        sum += numbers[i];
    }

    printf("The sum of the given array: %d\n", sum);

    return 0;
}
```

** DO NOT FORGET TO STUDY ABOUT 2D ARRAYS **

### Common Pitfalls
So now that we have talked about Arrays, let's talk about the common pitfalls and things you should be sure to recognize:

1. **Make sure that it is actually an array**: If it isn't declared as an array, it cannot be accessed like an array.`int a` is not `int a[5]`
2. **Make sure that it doesn't get accessed outside of its size**: An array like, `int a[5]` can only go through `a[0] - a[4]`. If you try to do anything from `a[5]` on will have garbage data and also can cause your program to crash or throw an error if you are not careful.
3. There is one more problem but we will talk about that with [pointers](https://github.com/maxcell/cop-3223/tree/master/pointers)...
