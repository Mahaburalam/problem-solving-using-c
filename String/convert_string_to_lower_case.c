#include<stdio.h>
int main()
{
    char str[100];
    int lowerStr;

    printf("Enter Upper string: ");
    scanf("%s", &str);

    lowerStr = strlwr(str);

    printf("Upper case to Lower case string is: %s", lowerStr);
    return 0;
}
