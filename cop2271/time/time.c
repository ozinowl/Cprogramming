/*
    the program converts the given number of seconds to HMS.alignas

    65seconds -> 0 hours 1 minutes 5 second
    
    
    */
   #include <stdio.h>

   int main(){

    int seconds = 0;
    int minutes = 0;
    int hours = 0;
    int remaining_minutes = 0;
    int remaining_seconds = 0;

    // Get seconds from input
    puts("enter the number of seconds");
    scanf("%d", &seconds);

    // Calculate the number of minutes

    minutes = seconds / 60;
    hours = minutes / 60;
    remaining_minutes = minutes % 60;
    remaining_seconds = seconds % 60;

    printf("%d seconds is %d hours %d minutes and %d seconds\n", seconds, hours, remaining_minutes, remaining_seconds);

    //TODO till thursday
    //calculate hours *integrated^

    return 0;

   }