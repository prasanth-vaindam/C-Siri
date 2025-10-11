#include<stdio.h>
int main()
{
    int i,j,k;

    printf("enter the length of side one:");
    scanf("%d",&i);
    printf("enter the length of side two:");
    scanf("%d",&j);
    printf("enter the length of side three:");
    scanf("%d",&k);

    if(i+j>k && j+k>i && k+i>j)
    {
        printf("Yes, triangle can be formed\n");
    }
    else
    {
        printf("No, triangle cannot be formed\n");
    }
    // for(i=1;i<=5;i++)
    // {
    //     for(j=5;j>i;j--)
    //     {
    //         printf(" ");
    //     }
    //     for(k=1;k<=(2*i-1);k++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    // }
    // return 0;
}