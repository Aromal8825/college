// biggest of three numbers //
#include  <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("enter three numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("largest number = %d ", num1);
        }
        else
        {
            printf("largest number = %d ", num3);
        }
    }
    if(num2 > num1)
    {
        if(num2 > num3)
        {
            printf("largest number = %d ", num2);
        }
        else
        {
            printf("largest number = %d ", num3);
        }
    }
}