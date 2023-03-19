/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  //declaring variables
  int m1, m2;
  float avg;

  //Getting user inputs
  printf("Enter the mark 1 : ");
  scnaf_s("%d", &m1);

  printf("Enter the mark 2 : ");
  scanf_s("%d", &m2);

  //calculation
  avg = m1 + m2 / 2.0;

  printf("The average is %.2f", avg);
  
  return 0;
}

