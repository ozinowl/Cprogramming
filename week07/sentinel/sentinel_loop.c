#include <stdio.h>

// TODO no negative numbers should be accepted (except -1)
// consider the case with no grades entered
double avgStudentGradesSentinel(void);

int main(void){
    printf("%.2lf\n", avgStudentGradesSentinel());


    return 0;
}

double avgStudentGradesSentinel(void){
    double grade = 0; // The current student grade
    double total_grade = 0;
    double n_grades = 0;

    while (grade != -1) { // -1 - sentinel value
        // Get the grade   
        printf("Enter a grade (-1 to exit): \n");
        scanf("%lf", &grade);
        if (grade<-1){
            puts("no negative numbers please except -1");
        }
        n_grades++;

        // Add the scanned grade tot the total grade
        total_grade += grade;
    }
    
    return total_grade/n_grades;
}