#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */

int main(void) {
   int n;
   
   srand(time(NULL)); 
   
   n = rand() % (RAND_MAX + 1); 
   
   printf("%d is ", n);
   
   if (n > 0) {
       printf("positive\n");
   } else if (n == 0) {
       printf("zero\n");
   } else {
       printf("negative\n");
   }
   
   return 0;
}

