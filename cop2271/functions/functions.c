/*
    \\* ea function should be limited to performing a single, well-defined task
     and the function name should express that task.
    
    working with functions.

    format of a function

    <return type> <function_name>(<function argument(s)>) // function header
     {
        definitions
        code of the function <logic>
    }

*/
   
   #include <stdio.h>
   
    //the function that doesn't return the value and doesn't take any inputs
    //function definition


   void print_course(void) {
    printf("You are in COP%d course\n", 2271);

   }


    void draw_circle(void){
        printf("  *\n");
        printf("*   *\n");
        printf(" * *\n");

    }

    void two(){
        puts("two");

    }
    void one_three(){

        puts("one");
        two();
        puts("three");
    }

    void draw_line(){
        puts("------");
    }

    void draw_intersections(){

        puts("  /\\");
        puts(" /  \\");
        puts("/    \\");
    }

    void draw_triangle(){

        draw_intersections();
        draw_line();

    }

    void draw_stickfigure(){
        draw_circle();
        draw_intersections();
        draw_line();
        draw_intersections();

    }
   int main(){
        // function call
        //print_course();
        //draw_circle();
        //puts("Starting now:");
        //one_three();
        //puts("done!");
       // draw_circle();
        //draw_intersections();
        //draw_line();
        //draw_intersections();
       // draw_triangle();
       draw_stickfigure();




    
    return 0;

   }