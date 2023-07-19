#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=5;j++)
        if(i<=5&&j>=6-i||i>=5&&j>i-5)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
}