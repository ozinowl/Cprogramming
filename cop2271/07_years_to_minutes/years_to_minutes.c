#include <stdio.h>

int main(){

int years;

puts("\nEnter a number of a years: ");
scanf("%d", &years);
printf("%d years is %d minutes\n", years, years*365*24*60);
    return 0;
}