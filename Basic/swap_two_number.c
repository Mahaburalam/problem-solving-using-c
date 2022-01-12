#include<stdio.h>
int main()
{
    int val1, val2, result;

    printf("Enter your first number: ");
    scanf("%d", &val1);

    printf("Enter your second number: ");
    scanf("%d", &val2);

    result = val1;
    val1 = val2;
    val2 = result;

    printf("Your given first number is: %d\n" ,val1);
    printf("Your given second number is: %d" ,val2);
    return 0;

}
