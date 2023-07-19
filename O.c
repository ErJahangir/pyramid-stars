#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        if(i<=4)
        {
            if(j==5-i||j==4+i)
        printf("*");
        else
        printf(" ");
        }
        else{
            if(j==i-4||j==13-i)
        printf("*");
        else
        printf(" ");
        }
        printf("\n");
    }
}