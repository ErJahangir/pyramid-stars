#include<stdio.h>
void h()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
            if(j==1||j==7||i==4)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
}
void a()
{
    int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
            if(j==1||j==7||i==4||i==1)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
}
void p()
{
     int i,j;
    for(i=1;i<=7;i++)
    {
        for(j=1;j<=7;j++)
            if(j==1||j==7||i==4||i==1){
                if (i>=5&&j==7)
                printf(" ");
                else
        printf("*");}
        else
        printf(" ");
        printf("\n");
    }
}
void y()
{
     int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7;j++)
        if(i==j||j==8-i){
        if(i==5&&j==5||i==6&&j==6)
        printf(" ");
        else
        printf("*");}
        else
        printf(" ");
        printf("\n");
    }
}
void o()
{
     int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7;j++)
        if (i==1||i==6||j==1||j==7)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
}
void l()
{
     int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7;j++)
        if (i==6||j==1)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
}
void i()
{
     int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7;j++)
        if (j==4)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }
}
void main()
{
    h();
    printf("\n");
    a();
    printf("\n");
    p();
    printf("\n");
    p();
    printf("\n");
    y();
    printf("\n*****************************\n");
    printf("\n");
    h();
    printf("\n");
    o();
    printf("\n");
    l();
    printf("\n");
    i();
}