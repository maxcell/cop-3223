# Find the Error
### Table of Contents
- [Example 1](#example-1)
- [Example 2](#example-2)
- [Example 3](#example-3)
- [Answers](#answers)

### Example 1
```c
// Objective: Show a log of users coming on in a chat with a random ID. if we hit multiples of 5 users,
// we want our program to tell us.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand(time(0));
    int i, id;

    for(i = 0, i < 20; i++){

        id = rand() % 500;

        printf("User %d as entered the chat.\n", id);

        if( (i + 1) % 5 == 0 ){
            printf("**You have %d users in the chat.**\n", i + 1);
        }
    }
    return 0;
}
```

### Example 2
```c
// Objective: Printout the values of the temperature array.
int i;
float temperature[5] = { 78.8, 79.5, 90.4, 10.3, 60 };

for( i = 0; i < 10; i++ ){

    printf("The temperature on Day %d was: %f\n", i + 1, temperature[i]);
}
```


### Example 3
```c
// Objective: Output the number of factors of two from a given input.
// For instance, 32 => 5, 28 => 2, 49 => 0.
int input, temp, num_of_twos = 0;
printf("Tell me what your input is?\n");
scanf("%d", &input);

temp = input;

do{
    if( temp % 2 == 0){
        num_of_twos++;
        temp /= 2;
    }
}while(num_of_twos % 2 == 0);

printf("The number of twos in %d are %d\n", input, num_of_twos);
```

### Answers

- Example 1
    - If you notice inside of your for loop `for(i = 0, i < 10; i++)`, you will see that `i = 0,` is in there. You have to be sure that each piece of your for loop is separated with `;`. So to correct this all you would need to do is have it as `for(i = 0; i < 10; i++)`
- Example 2
    - Once again, if we see inside of the for loop, `for( i = 0; i < 10; i++ )`, we notice that it starts at `i = 0` and goes until `i < 10`. Well, if we refer to `float temperature[5]`, it says that our array cannot be more than `5` size. So the problem is we want to shorten our for loop to be `for( i = 0; i < 5; i++ )`
- Example 3
    - If you notice our `while` portion of the `do while`: `while(num_of_twos % 2 == 0)`, you will see that is trying to say that our continue condition is if num_of_twos is evenly divisible by 2. Unfortunately, that is not the condition we need when trying to figure out if `input` is divisible by 2. In this case, we would need to change it to have `while(temp % 2 == 0)`
