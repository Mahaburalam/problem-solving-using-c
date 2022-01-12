#include<stdio.h>
int main()
{
    float r, circle;

    printf("Enter circle value: ");
    scanf("%f",&r);

    circle = (3.1416*r*r);
    printf("Area of circle is: %.3f", circle);
    return 0;
}
