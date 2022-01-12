#include<stdio.h>
int main()
{
    char val1[50], val2[50];
    int result;

    printf("Enter first string: ");
    scanf("%s",&val1);

    printf("Enter second string: ");
    scanf("%s", &val2);

    result = strcat(val1,val2);
//    strcat(val1,val2);
    printf("After concatenation output is: %s", result);
//    printf("After concatenation output is: %s", val1);
    return 0;

}
