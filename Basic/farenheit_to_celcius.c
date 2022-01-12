#include<stdio.h>
int main()
{
    float C, F;
    printf("Enter farenheit Value: ");
    scanf("%f",&F);

    C = ((F-32)*.55);
    printf("Your farenheit to celcius value result is: %.3f C", C);
    return 0;
}

