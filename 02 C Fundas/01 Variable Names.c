/*

Note: No keywords will be considered as a variable.
*/
#include<stdio.h>
int main(){
    int i = 0;
    int I = 1;
    
    int _max = 100; // predefined variable


    int fn = 10; // Bad - not meaningful name
    int firstNumber = 10; 
    
    // Invlaid
    // int 1num = 10;
    // int 2num = 11;

    int $ca$h = 100500;
    int $ = 100500;
    printf("$ca$h is %d\n", $ca$h);
    printf("i = %d\nI = %d\n$ = %d",i,I, $);
    return 0;
}
