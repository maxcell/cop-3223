# Files
### Table of Contents
- [Basics](#basics)

### Basics
Files are **pointers** they are just a subsection of the entire pointer family. Any time you want to do anything with a file, you will need to be sure to have the declaration correct: `FILE *`. We typically try to distinguish our file pointers based upon whether or not we are doing `input` or if we are doing `output`, this is not only for our benefit but for the benefit of those who read our code. For `input`, we can write `FILE* ifp` which if you read `ifp` to me says `input file pointer`, and for output, `FILE* ofp` which if you read `ofp` to me says `output file pointer`.

The next portion is now that we have this declaration, we have to do something with it. We need to `open` it. We open files using the `fopen()` function. It takes in a `filepath` and an `action`. So we always want to be sure to have both pieces `fopen( filepath, action)`. We want to be sure to have the correct path, normally this file will be in the same directory as the executable file. That's what we want to be sure about. **WE NORMALLY DO NOT WANT TO HARCODE THE FILEPATH IN THERE IF WE ASK A USER FOR A FILE**. But we will need to hardcoded the action. (Hardcoding means that we directly put in the name of our file rather than using the variable that will change upon different input).

Imagine we had a file called `input.txt` and it read:
```
1 2 3 4 5 6
-1
```
If we look at our code:
```c
#include <stdio.h>

int main(void){

    int i = 0;                  // Counter

    FILE* ifp = NULL;           // Our file pointer, which will hold our reference to whatever file and action we are doing
    char filename[30];          // Our file name, with a maximum size of 30
    int buffer;                 // Buffer: A place to store what we read in from the file

    while(ifp == NULL){
        printf("What is your file name?\n");
        scanf("%s", filename);
        ifp = fopen(filename, "r");
    }

    fscanf(ifp, "%d", &buffer);
    while(buffer != -1){

        printf("%d number in %s is: %d\n", ++i, filename, buffer);
        fscanf(ifp, "%d", &buffer);
    }

    return 0;
}
```
We will expect to see this as our output:
```
What is your file name?
input.txt
1 number in input.txt is: 1
2 number in input.txt is: 2
3 number in input.txt is: 3
4 number in input.txt is: 4
5 number in input.txt is: 5
6 number in input.txt is: 6
```

**Very important note**: We did a scan outside of our `while` loop and one inside our `while` loop. The reason for this is due to the fact we want to be sure to not output the `-1` in our output. Had we written it more like:
```c

while(fscanf(ifp, "%d", &buffer) != -1){
    printf("%d number in %s is: %d\n", ++i, filename, buffer);
}
```
Our output would have been:
```
What is your file name?
input.txt
1 number in input.txt is: 1
2 number in input.txt is: 2
3 number in input.txt is: 3
4 number in input.txt is: 4
5 number in input.txt is: 5
6 number in input.txt is: 6
7 number in input.txt is: -1
```
There are other methods of avoiding it but, I just thought we just want to be careful about that.

Notice how we use `fscanf()` to do our scanning with `FILE`s. The function works almost exactly the same way as `scanf()`, however, we have one additional piece into our function and that is whatever `FILE*` we are using. So in our code `fscanf(ifp, "%d", &buffer)`, we needed to be sure to have `ifp` in front and the rest looks like the normal `scanf()` function.
