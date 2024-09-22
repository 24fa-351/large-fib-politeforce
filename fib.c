#include <stdio.h>
#include <stdlib.h>

// Iterative method for fibonacci
int unsigned long long iterative(int cycles) {
    
    // Initialize variables
    int unsigned long long x = 0;
    int unsigned long long y = 1;
    int unsigned long long z = 1;
    if(cycles == 0) {
      return 0;
    } 
      for(int i = 0; i < cycles-1; i++) {
         x = y;
         y = z;
         z = x + y;
      }
    return z;
}

// Recursive method for fibonacci
long recursive(long cycles) {
    if(cycles == 0 || cycles == 1)
        return cycles;

    return recursive(cycles-1) + recursive(cycles-2);
}

int main(int argc, char **argv) {
    // Initialize variables
    //int unsigned long firstInteger = strtol((argv[1]), &p, 10);
    int firstInteger = atoi(argv[1]);
    int N;
    int unsigned long long nthFibonacciNumber;
    char recursiveOrIterate = *(argv[2]);
    
    // Ask user for initial integer
   //printf("Your integer was %llu\n\n", firstInteger);

    // // Ask user for iterative or recursive commands
    // printf("Enter i or r: ");
    // scanf("%c", &recursiveOrIterate);
    //printf("You chose %c\n\n", recursiveOrIterate);
    N = firstInteger;
    //printf("N is: %d\n", N);
    N -= 1;
    // Run iterative or recursive methods
    if(recursiveOrIterate == 'i')
        nthFibonacciNumber = iterative(N);
    else
        nthFibonacciNumber = recursive(N);

    printf("%llu\n\n", nthFibonacciNumber);
    return nthFibonacciNumber;
}