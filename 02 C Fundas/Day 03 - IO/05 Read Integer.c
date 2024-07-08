#include <stdio.h>
int main()
{
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    /*
      1.  %d format specifier inside the scanf() function 
          to take int input from the user

      2. Notice, that we have used &testInteger inside scanf().
         It is because &testInteger gets the address of testInteger, 
         and the value entered by the user is stored in that address.    
    */
    printf("Number = %d",testInteger);
    return 0;
}