#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a ");
    scanf("%d",&a);
    printf("enter value of b ");
    scanf("%d",&b);
    printf("enter value of c ");
    scanf("%d",&c);
    if (a>b && a>c)
    {
        printf("a is bigger ");


    } 
    else if (b>c && b>a)
        {
            printf ("b is bigger");



        }else if (c>a && c>b)
        {
            printf ("c is bigger ");


        }
    
    return 0;



}