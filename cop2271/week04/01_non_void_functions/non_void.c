/*
practice with non-void functions  

*/

   #include <stdio.h>
   // Function prototype
   // The function named getFive returns an integer and takes no arguments
   int getFive(void);


    // function prints the given value
    // The funtion named printCourse returns nothing and takes
    // one integer argument
    void printCourse(int course_number);

    // function that describes weather
    void describeWeather(int temp);


    //////////////////////////////////////////////to do for thursday
    // function returns kilometers for the given miles
    double milesToKms(int miles);
    //1mile=1.609km 5280ft = 2640 = 1320
    double kmstomiles(int kms);



    int main(void) {
    int var;
    // call a function
    var = getFive();
    
    printf("The value of var is %d\n", var);

    printCourse(1200*2);

    //test describeWeather

    int temp = 0;

    printf("Enter a temperature: ");
    scanf("%d", &temp);
    describeWeather(temp);

    return 0;
   }




    //////////////////////////////////////
    // function defenition
    int getFive(void){
        int five = 5;

        return five;
    }

    ///////////////////////
    void printCourse(int course_number){
        printf("You are in COP%d course\n", course_number);

    }

    /////////////////////////////////////////
    void describeWeather(int temp){

        if (temp>70){
            puts("HOT");
        }
        if (temp<=70) {
            puts("COLD");
        }

    }