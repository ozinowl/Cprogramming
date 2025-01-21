/*
    the program converts the given number of seconds to HMS.alignas

    65seconds -> 0 hours 1 minutes 5 second
    
    
    */
   #include <stdio.h>

   int main(){

    int seconds = 0;
    int minutes = 0;
    int remaining_seconds = 0;

    // Get seconds from input
    puts("enter the number of seconds");
    scanf("%d", &seconds);

    // Calculate the number of minutes
    minutes = seconds / 60;
    remaining_seconds = seconds % 60;

    printf("%d seconds is %d minutes and %d seconds\n", seconds, minutes, remaining_seconds);

    return 0;

   }