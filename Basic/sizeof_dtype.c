#include<stdio.h>
int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of integer data type is: %d byte\n", sizeof(intType));
    printf("Size of float data type is: %d byte\n", sizeof(floatType));
    printf("Size of double data type is: %d byte\n", sizeof(doubleType));
    printf("Size of character data type is: %d byte", sizeof(charType));

    return 0;
}
