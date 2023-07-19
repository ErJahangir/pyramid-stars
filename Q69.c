#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
    int a=1;
        for(j=1;j<=7;j++)
        if(j>=5-i&&j<=3+i){
        printf("%d",a);
        j<=4?a++:a--;
        if(j==4)
        a=a-2;
        }
        else
        {
        printf(" ");
        }
    printf("\n");
    }
}
