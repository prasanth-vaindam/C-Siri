/*

Note: No keywords will be considered as a variable.
*/
#include<stdio.h>
int main(){
    int i = 0;
    int I = 1;
    int a = 450;
    printf("value of i: %d\n value of I: %d\n",i,I);
    i = 100;
    printf("%d\n",i); // 
    i = 200;
    printf("%d\n",i); // 
    i = a;
    printf("%d\n",i); // 450
int b;
    b = 345;
    i = b;
    printf("%d\n",i); // 
    I = 200;
    printf("value of i: %d\n value of I: %d\n",i,I);
    printf("here1");
    int age = 12;
    // AGE = 13;
    
    int _max = 100; // predefined variable

    char *first_name = "prasanth";
    char firstName[10] = "Srikanth";
    printf("age: %d\n",age);
    printf("_max: %d\n",);
    printf("my name is : %s\n", first_name);
    printf("my Guru's name is : %s\n", firstName);


    int fn = 10; // Bad - not meaningful name
    int firstNumber = 10; 
    
    // Invlaid
    // int 1num = 10;
    // int 2num = 11;

    int $ca$h = 100500;
    int $ = 100500;
    printf("$ca$h is %d\n", $ca$h);
    printf("i = %d\nI = %d\n$ = %d",i,I, $);

    switch(1){
        case a:
        default : 
    }

    return 0;
}
