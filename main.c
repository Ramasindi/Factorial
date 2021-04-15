#include <stdio.h>
#include <string.h>
//function to perform factorial computation
long int multiplyNumbers(int n);

int main(int argc, char *argv[])
{
    int number, factorial;
    if(argc != 2) {
        printf("Invalid Usage.\n\n");
        printf("Usage: ./a.out <number>\n");
        return 0;
    }
    // Converting string argument to number
    number = atoi(argv[1]);

    //Ensuring input is a positive number
    if(number < 0) {
        printf("Error: Factorial of negative number doesn't exist.\n");
        return 1;
    }
    //Printing CMD argument provided
    printf("\nThe CMD argument provided is ");
    printf("%d",number);

    printf("\nFactorial of %d = %ld", number, multiplyNumbers(number));
    return 0;
 }
////function performing factorial computation
long int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);//recursion taking place
    else
        return 1;
}
