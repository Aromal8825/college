// swapping two values //
#include<stdio.h>
void main()
{
    int a, b, temp;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("after swapping : %d %d", a, b);
}
