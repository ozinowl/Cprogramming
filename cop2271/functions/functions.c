/*

    working with functions.

    format of a function

    <return type> <function_name>(<function argument(s)>) {
        code of the function
    }

*/
   
   #include <stdio.h>
   
    //the function that doesn't return the value and doesn't take any inputs
    //function definition
   void print_course(void) {
    printf("You are in COP%d course\n", 2271);


   }

   int main(){
        // function call
        print_course();

    
    return 0;

   }