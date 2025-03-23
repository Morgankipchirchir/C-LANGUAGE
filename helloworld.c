#include <stdio.h>
#include <stdbool.h>

int main() {
    //printf("Hello World!\n");
    //printf("I like coding");


     /*this is a   multi line comment  */
// n = newline
// t = tab

   // printf("Hello\nWorld!\n");
   // printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");



   //variables
   /*
   int x; //declaration
    x = 123;//Intialization
    int y = 321;//declaration + Intialization

    int age = 22;//interger
    float gpa = 200.3;//floating point number "decimal"
    char grade = 'c';//single character
    char name[] = "MOGI";//array of characters

    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your avarage grade is %c\n", grade);
    printf("Your gpa is %f\n", gpa);
   */
   
   //data types

   float c = 3.14345678987654;
   double d = 3.1412234567890098765432;

   bool e = true; // (true or false) %d  

   char f = 120; // %d or %c
   unsigned char g = 255;// %d or %c

   short  h = 32767; //%d
   unsigned short  i = 65535;//%d 

   int j = 2147483647; //%d
   unsigned int k = 4294967295;  //%u   


   // printf("0.15%f\n", c);//float
   //printf("0.15%d \n", d);//double     
   //printf("%d\n", e);//bool   
   //printf("%c\n", f);//double
   //printf("%d\n", g);//double
   // printf("%d\n", h);//short
   // printf("%d\n", i);//unsigned short
   //printf("%d\n", j);
   printf("%u\n", k);
   
    return 0;
}