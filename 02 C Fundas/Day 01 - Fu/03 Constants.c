#include<stdio.h>
int main(){
    int var = 100;
    const double PI = 3.14;

    var = 200;
    PI = 5.6; // error: assignment of read-only variable 'c_var'

    return 0;
}