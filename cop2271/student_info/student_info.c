//preprocesosor directive
#include <stdio.h>

//main function
int main() {
    //create a variable
    int Course_ID;
    //assign the value to the first_number variable
    Course_ID = 2271;

    //create and initialize
    int Student_ID = 10234;

    //create a third variable
    int sum = Course_ID + Student_ID;

    //print the value of a variable
    //%d - conversion specifier
    printf("Name: John Doe\n"); 
    printf("Course ID: 2271\n"); 
    printf("Course ID: %d\n", Course_ID);
    printf("Student ID: %d\n", Student_ID);
    printf("Student ID - Course ID is: 7963\n");
    printf("Student ID - COurse ID is: %d\n", Student_ID - Course_ID);

    return 0;
}