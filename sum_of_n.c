// sum of n numbers //
#include<stdio.h>
void main()
{
    int i, n, num, sum = 0;
    printf("enter number of elements : ");
    scanf("%d", &n);
    printf("enter %d numbers : ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum = sum + num;
    }
    printf(" sum = %d", sum);
}
