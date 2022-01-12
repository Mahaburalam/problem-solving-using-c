#include<stdio.h>
int main()
{
    float celsius, fahrenhite;

    printf("Enter celsius value: ");
    scanf("%f",&celsius);

//    fahrenhite = ((celsius * (9/5))+32);
    fahrenhite = ((celsius*1.8)+32);
    printf("Your given celsius to fahrenhite result is: %.2f F", fahrenhite);
    return 0;
}
