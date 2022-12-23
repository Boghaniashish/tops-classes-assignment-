#include<stdio.h>
int main()
{
    int num;
    printf("enter any number ");
    scanf("%d",&num);
    if (num%num==0 && num/1==0)
    {
        printf("%dis the prime number ");

    }
    else
    {
        printf("%d is not prime number");


    }

    return 0;
}