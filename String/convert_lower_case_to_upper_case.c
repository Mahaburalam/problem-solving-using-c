#include<stdio.h>
int main()
{
    char lower[100];
    int lowerStr;

    printf("Enter lower case string: ");
    scanf("%s", &lower);

    lowerStr = strupr(lower);
    printf("Output of lowercase to uppercase string is: %s", lowerStr);
    return 0;
}
