#include<stdio.h>
int main(){
    // char name[] = "Good";
    char *name = "Good";
    printf("%s\n",name);
    name = "Good Boy";
    printf("%s\n",name);
    name = ""; // this is a null string
    printf("%s\n",name);
    name = "x";
    printf("%s\n",name);
    
    name = "x is a name given to an unknown person\n";
    printf("%s",name);

}