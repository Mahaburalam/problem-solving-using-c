#include<stdio.h>
int main()
{
    int Rectangle, height, width;
    printf("Enter two value: ");
    scanf("%d%d", &height,&width);

    Rectangle = height*width;

    printf("Area of Rectangle result is %d", Rectangle);
    return 0;
}
