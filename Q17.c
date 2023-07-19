#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<9;j++)
        {
            if(j==9-i||i==1||i==j+1)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
}