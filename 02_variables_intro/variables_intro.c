//preprocesosor directive
#include <stdio.h>

//main function
int main() {
    //create a variable
    int first_number;
    //assign the value to the first_number variable
    first_number = 1;


    //create and initialize
    int second_number = -15;

    //create a third variable
    int sum = first_number + second_number;

    //print the value of a variable
    //%d - conversion specifier
    printf("The first number is %d\n", first_number); 
    printf("The second number is %d\n", second_number);
    printf("%d + %d = %d\n", first_number, second_number, sum);

    return 0;
}