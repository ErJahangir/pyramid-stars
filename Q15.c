#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j==4||i==4||i==4-j)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
}