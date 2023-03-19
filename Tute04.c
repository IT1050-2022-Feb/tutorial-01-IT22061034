/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

//function prototype
int minimum(int a, int b);
int maximum(int a, int b);
int multiply(int a, int b);

//starting main funtion
int main() {

  //declaring variables
    int no1, no2;

  //Getting user inputs
    printf("Enter a value for no 1 : ");
    scanf("%d", &no1);
  
    printf("Enter a value for no 2 : ");
    scanf("%d", &no2);

  //function calling
    printf("minimum number is %d \n", minimum(no1, no2));
    printf("maximum number is %d \n", maximum(no1, no2));
    printf("after multiplied no1 and no2 answer is %d \n", multiply(no1, no2));
    return 0;
}

//minimum function implementation
int minimum(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

//maximum function implementation
int maximum(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

//multiply function implementation
int multiply(int a, int b) {
    return a * b;
}