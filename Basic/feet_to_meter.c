#include<stdio.h>
int main()
{
    float feet, meter;
    printf("Enter feet value: ");
    scanf("%f", &feet);

    meter = (feet/3.28);
    printf("Your given feet to meter is: %.2fm", meter);
    return 0;

}
