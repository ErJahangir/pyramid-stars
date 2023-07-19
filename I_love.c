#include<stdio.h>
#include<windows.h>
void first()
{
    int i,j;
    for(i=1;i<=5;i++)
    printf("*\n");
    {
        for(j=1;j<=5;j++)
        printf("*");
    }
}
void second()
{
    int i,j;
    for(i=1;i<=5;i++){
    for(j=1;j<=5;j++)
    if(i==1||i==5||j==1||j==5)
    printf("*");
    else
    printf(" ");
    printf("\n");
    }
}
void fourth()
{
     int i,j;
    for(i=1;i<=5;i++){
    for(j=1;j<=5;j++)
    if(i==1||i==3||i==5||j==1)
    printf("*");
    else
    printf(" ");
    printf("\n");
    }
}
void sixth()
{
     int i,j;
    for(i=1;i<=4;i++){
    for(j=1;j<=5;j++)
    if(j==1||i==4||j==5)
    printf("*");
    else
    printf(" ");
    printf("\n");
    }
}
void third()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        if(i==j||j==8-i)
        printf("*");
        else
        printf(" ");
        printf("\n");
    }   
}
void fifth()
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
    void p()
    { int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            if(i==1||j==1||i==3||j==5){
            if(i==4&&j==5||i==5&&j==5)
            printf(" ");
            else
            printf("*");}
            else
            printf(" ");
            printf("\n");
        }
}
void r()
    { 
        int i,j;
        for(i=1;i<=7;i++)
        {
            for(j=1;j<=5;j++)
            if(i==1||j==1||i==3||j==5||i==4&&j==2||i==5&&j==3||i==6&&j==4)
            {if(i==4&&j==5||i==5&&j==5||i==6&&j==5)
            printf(" ");
            else
            printf("*");
            }
            else
            printf(" ");
            printf("\n");
        }
}
void t()
    { int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=5;j++)
            if(i==1||j==3)
            printf("*");
            else
            printf(" ");
            printf("\n");
        }
    }
void main()
{
    system("cls");
    int i,j;
    for(i=1;i<=5;i++){
    for(j=1;j<=5;j++)
    if(j==3)
    printf("*");
    else
    printf(" ");
    printf("\n");}
    printf("\n\n");
    first();
    printf("\n\n");
    second();
    printf("\n");
    third();
    printf("\n");
    fourth();
    printf("\n\n");
    fifth();
    printf("\n");
    second();
    printf("\n");
    sixth();  
    printf("\n");
}