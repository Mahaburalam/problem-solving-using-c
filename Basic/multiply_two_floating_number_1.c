#include<stdio.h>
int main()
{
    /*
    char name[44];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Your Given name is: %s" ,name);
    return 0;
    */
    int num1, num2;
    float mul;
    printf("Enter two number: ");
    scanf("%d%d", &num1,&num2);

    mul = (float)num1*num2;
    printf("Your given number output is: %.2f",mul);
    return 0;
}
