#include<stdio.h>
int main()
{
//  Print user name using scanf function
    char name[15];

    printf("Enter Your Name: ");
    scanf("%s",&name);

    printf("Your name is: %s" ,name);
    return 0;
}
