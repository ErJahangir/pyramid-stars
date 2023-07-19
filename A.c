#include<stdio.h>
int main()
{
    for (int i=0;i<=5;i++)
    {
        for(int j=0;j<=10;j++)
        {
            if(j==5-i||j==i+5||i==3&&i==3&&j>=2&&j<=8)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}