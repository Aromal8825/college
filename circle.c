// area of circle //
#include<stdio.h>
void main()
{
    float area, r;
    printf("enter radius of circle : ");
    scanf("%f", &r);
    area = r * r * 3.14;
    printf("area of circle = %f", area);
}