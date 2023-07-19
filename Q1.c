#include<stdio.h>
int main()
{
    for (int i=0;i<=4;i++)
    {
        for(int j=0;j<=4;j++)
        {
            if(j<=2-i||j>=i+2||j<=i-2||j>=6-i)
            printf("*");
            else 
            printf(" ");
        }
        printf("\n");
    }
}