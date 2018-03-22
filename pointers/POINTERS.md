# Pointers
### Table of Contents
- [How did we do things before Pointers?](#how-did-we-do-things-before-pointers)
    - [Example 1](#example-1)
- [Power of Pointers](#power-of-pointers)
    - [Example 2](#example-2)
- [Breaking Down Pointers](#breaking-down-pointers)
    - [Example 3](#example-3)
-  [Pointer Magic](#pointer-magic)
    - [Example 4](#example-4)
- [Common Pitfalls/Issues](#common-pitfalls)

### How did we do things before Pointers?
Pointers are incredibly powerful in the realm of C. The power comes from the ability to refrence a location in memory(RAM) which grants the programmer alot of speed and flexiblity.
#### Example 1
```c
// Objective: Print number of street numbers
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *house1 NULL;
    int *house2 NULL;

    int house3 = 1500;
    int house4 = 1505;

    *house1 = house3;
    *house2 = house4;


    printf(" %d \n ", *house1);
    printf(" %d \n ", *house2);

    printf(" %d \n ", house3);
    printf(" %d \n ", house4);

    //house 1 and 3 have the same value
    //house 2 and 4 have the same value

    //*house1 is known as derefrencing the address, which really means hey go to the address of house1 and get the value at that address

    house3 = 1600;

    house1 = &house3;

    printf(" %d \n", house3);
    printf(" %d \n", *house1);

    return 0;
}

```

### Power of Pointers
As you saw above, pointers are kinda tricky so we gotta be careful if we are talking about the address or the value.

#### Example 2
```c
// Objective: Demonstrate that in C pointers are carracter arrays
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    char *filename = "here lies dave";


    //allocates for strlen many characters

    //For characters in C a string of them form a string of characters

    printf("%s \n", filename);


    int i = 0;

    for(i = 0; i < strlen(filename); i++)
    {
        printf("%c \n", filename[i]);
    }





    return 0;
}
```
And with arrays we know that we can also utilize looping structures to access all of the pieces that we would want.

### Breaking Down Pointers
Let's take a look at the pieces that make a pointer:

`int *houseNum`

1. `int` tells us what the type of data is being associated with our pointer. This can be any type such as `char`, `float`, and more (but that you will learn about later on).
2. `*` indicates that our variable is also assigned to be a pointer;
3. `houseNum` indicates our variable name, whenever we reference a variable, we need to be sure to always have the name around

#### Example 3
```c
#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *houseNum = NULL;

    printf("%d ", *houseNum);
    //what would happen if we did this?

    //segfault

    printf("%d", houseNum);
    //prints the address


    return 0;
}
```

### Cool Stuff with Pointers
Well, we kind of understand what we have here now. But let's keep playing around with it.

#### Example 4
```c
#include <stdio.h>
#include <stdlib.h>
int main(void){

    int *address;
    int var = 2;


    printf("%d", address);

    //print address like usual

    address++;

    printf("%d", address);

    //memory move

    address = &var;

    printf("%d", address);


   return 0;
}
```

** DO NOT FORGET TO STUDY PASS-BY-REFERENCE **

### Common Pitfalls
So now that we have talked about Pointers, let's talk about the common pitfalls and things you should be sure to recognize:

1. **Make sure that it is actually an pointer**: If it isn't declared as an pointer, it cannot be accessed like an pointer.`int a` is not `int *a`
2. **Make sure that it doesn't get accessed outside of its size**: An array like, `int a[5]` can only go through `a[0] - a[4]`. If you try to do anything from `a[5]` on will have garbage data and also can cause your program to crash or throw an error if you are not careful.
