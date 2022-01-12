#include<stdio.h>
int main()
{
    int square, area;

    printf("Enter your area value: ");
    scanf("%d", &area);

    square = area*area;
    printf("Area of given square vale is: %d", square);
    return 0;
}
