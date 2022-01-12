#include<stdio.h>
int main()
{
    float num1, num2, result;
    printf("Enter two number: ");
    scanf("%f%f", &num1,&num2);

    result = num1*num2;
    printf("The result is: %.2f", result);
    return 0;
}
