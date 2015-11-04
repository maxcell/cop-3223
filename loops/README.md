# Loops
### Table of Contents
- [How did we do things before loops?](#how-did-we-do-things-before-loops)
    - [Example 1](#example-1)
- [Types of Loops](#types-of-loops)
    - [While Loops](#while-loops)
    - [Do While Loops](#do-while-loops)
    - [For Loops](#for-loops)
- [Printing with loops](#printing-with-loops)
    - [Example 2](#example-2)
-  [Types of Loops](#types-of-loops)
- [Arithmetic Computations](#arithmetic-computations)
    - [Example 3 (Sum)](#example-3-sum)
    - [Example 4 (Powers of 2)](#example-4-powers-of-2)

### How did we do things before loops?
Loops are *crazy* and that's okay! But let's take a look at how life once was before these glorious structures.

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

### Types of Loops
As you already know, we have several different type of looping structures that we can use and each does a different thing for us:
#### While Loops
The `while` loop only has one piece, the condition.
```c
while( condition == true ){
    do stuff...
}
```
We will continue to operate solely if the condition is true. So if our initial condition is not true, we will never have to enter in the `while` loop.

#### Do-While Loops
The `do while` loop is different from the `while` loop with the distinction of `do`.
```c
do {
    do stuff...
} while(condition == true)
```
It means that we will be guaranteed to go inside and do the operations 1 time even if the
while condition ends up being `false`. But beyond that, the `do while` loop is practically identical to the while loop. **Do not forget, you at least have to go through the loop 1 time.**

#### For Loops
The `for` loop is written differently than the other two loops but still can provide the same operations as before.
```c
for( pre-condition ; condition ; post-condition ){
    do stuff...
}
```
Here we use the `for` keyword and the parenthesis have three parts:
    1.  `pre-condition`: This will be the initial state of our for loop, this is typically where you see the `i = 0` portion. Telling our program that we are going to make our `i` start at `0`.
    2.  `condition`: This is the condition that needs to be `true` so in the `while` and `do while` loops we saw that the loop would continue to run while `condition == true`. This is exactly the same thing we do for the `for` loop.
    3.  `post-condition`: This is what happens whenever we have finished each run of the `for` loop. So when we do `i++`, we are telling our program, if we have made it through a successful run through our loop, we increment our `i` and then run to see if the `condition == true`.

### Printing with loops
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
        if(i < 1000000 - 1) printf(" ");    // Make it print out a space
                                            // after every number except the last
    }
        printf("\n");                       // Last number has a newline instead
    return 0;
}
```

### Arithmetic Computations
But sure, we can print out numbers as much as we want but we want to do some cool things with them. Let's take this for instance:

#### Example 3 (Sum)
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
So most of the work happens within the loop, so breaking down what is happening:
```
1. Pre-Condition: We are telling i to start at 0 (i = 0)
2. Condition: We check if i is less than or equal to end (i <= end)
3. We go into the loop
    a. Take sum and add our current 'i' (sum + i)
    b. Assign the result to sum         (sum = sum + i)
    c. The shorthand is                 sum += i
4. Post-Condition: Increment our value of 'i'
5. Repeat until 'Condition' is met

```
#### Example 4 (Powers of 2)
Here we want to try to learn some cool things to do with another other loop, the `while` loop:
```c
// Objective: Ask the user for a __nonnegative__ exponent to raise 2 to.
// Then, output the result
#include <stdio.h>
int main(void){

    int base = 2;   // The base
    int exponent;   // What we raise our base to
    int temp;       // Something we will use to keep track of our run in the while loop

    int result = 1;

    // Prompt the user to give us an exponent
    printf("So what do you want to raise 2 to?\n");
    scanf("%d", &exponent);
    temp = exponent;

    // We keep running until our temp (exponent) hits 0. Once it does, we will have
    // our computed power
    while( temp > 0 ){
        if(temp == 0){
            result *= 1;
        }
        else {
        result *= base;
        temp--;
        }
    }

    // We have arrived at the final result, let's print it out!
    printf("When %d is raised to %d, the result is: %d\n", base, exponent, result);

    return 0;
}
```

Let's take a look at our output on `0, 1, and 8`:
```
So what do you want to raise 2 to?
0
When 2 is raised to 0, the result is: 1
```
```
So what do you want to raise 2 to?
1
When 2 is raised to 1, the result is: 2
```
```
So what do you want to raise 2 to?
8
When 2 is raised to 8, the result is: 256
```
