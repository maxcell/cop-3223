# Arrays
### Table of Contents
- [How did we do things before Arrays?](#how-did-we-do-things-before-arrays)
    - [Example 1](#example-1)
- [Power of Arrays](#powers-of-arrays)
    - [Example 2](#example-2)
- [Types of Loops](#types-of-loops)
    - [While Loops](#while-loops)
    - [Do While Loops](#do-while-loops)
    - [For Loops](#for-loops)
-  [Types of Loops](#types-of-loops)
- [Arithmetic Computations](#arithmetic-computations)
    - [Example 3 (Sum)](#example-3-sum)
    - [Example 4 (Powers of 2)](#example-4-powers-of-2)
- [Common Pitfalls](#common-pitfalls)

### How did we do things before Arrays?
Arrays are very useful for us. We have the ability to store a ton of data in one structure while being able to access it effortlessly. Imagine if we had no arrays at all.
#### Example 1
```c
// Objective: Print out the temperatures of each day
#include <stdio.h>

int main(void){

    int day_1 = 78, day_2 = 76, day_3 = 70,
    day_4 = 79, day_5 = 69, day_6 = 75;

    printf("Day 1: %d degrees\n",day_1);
    printf("Day 2: %d degrees\n",day_2);
    printf("Day 3: %d degrees\n",day_3);
    printf("Day 4: %d degrees\n",day_4);
    printf("Day 5: %d degrees\n",day_5);
    printf("Day 6: %d degrees\n",day_6);
    return 0;
}
```
