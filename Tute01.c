/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   
   
   int sub1Mark, sub2mark, sum;
   float average;
   
   printf("Input subject1 mark : ");
   scanf("%d" ,&sub1Mark);
   
   printf("Input subject2 mark : ");
   scanf("%d" ,&sub2Mark);
   
   sum = sub1Mark + sub2mark;
   average = sum/2.0;
   
   printf("average is %f" ,average);
   
   
  return 0;
}

