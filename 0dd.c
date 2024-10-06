// odd or even number//
#include<stdio.h>
void main()
{
    int num, rem;
    printf("enter a number : ");
    scanf("%d", &num);
    rem = num / 2;
    if(rem == 0)
    {
        printf("even number ");
    }
    else
    {
        printf("odd number ");
    }
}
