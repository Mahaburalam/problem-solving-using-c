#include<stdio.h>
int main()
{
    char ch[100];
    int length;

    printf("Enter string: ");
    scanf("%s",&ch);

    length = strlen(ch);
    printf("Length of string value is: %d", length);
    return 0;

}
