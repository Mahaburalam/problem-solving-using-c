#include<stdio.h>
int main()
{
    int num1, num2, sum, sub, mul, mod;
    float div;

    printf("Enter your two number: ");
    scanf("%d%d", &num1,&num2);

    sum = num1+num2;
    sub = num1-num2;
    mul = num1*num2;
    div = (float)num1/num2;
    mod = num1%num2;

    printf("Sum of two number is: %d\n", sum);
    printf("sub of two number is: %d\n", sub);
    printf("mul of two number is: %d\n", mul);
    printf("div of two number is: %.2f\n", div);
    printf("mod of two number is: %d\n", mod);

    return 0;

}
