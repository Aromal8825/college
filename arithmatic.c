// arithmatic operations using switch //
#include<stdio.h>
void  main()
{
    char operator;
    int a, b;
    printf("enter two numbers : ");
    scanf("%d %d", &a, &b);
    printf("enter an operater (+, -, *, /) : ");
    scanf("%s", &operator);
    switch(operator)
    {
        case'+':
        printf("additon = %d ",a + b);
        break;
        case'-':
        printf("subtraction = %d ",a - b);
        break;
        case'*':
        printf("multilication = %d ",a * b);
        break;
        case'/':
        printf("division = %d ",a / b);
        break;
        default:
        printf("invalid oprater ");
    }
}
