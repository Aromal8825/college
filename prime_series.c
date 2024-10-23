// prime number series till 200 //
#include <stdio.h>
void main()
{
    int num, i, choice = 0;
    printf("enter the last number of the series : ");
    scanf("%d", &num);
    printf("prime numbers = ");
    for (i = 2; i <= num; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7 || i == 11)
        {
            printf("%d ", i);
        }
        if (i % 2 == 0)
        {
            choice = 0;
        }
        else if (i % 3 == 0)
        {
            choice = 0;
        }
        else if (i % 5 == 0)
        {
            choice = 0;
        }
        else if (i % 7 == 0)
        {
            choice = 0;
        }
        else if (i % 11 == 0)
        {
            choice = 0;
        }
        else
        {
            choice = 1;
        }
        if (choice == 1)
        {
            printf("%d ", i);
        }
    }
}
