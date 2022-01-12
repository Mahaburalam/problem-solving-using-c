#include<stdio.h>
int main()
{
    int days, years, months, weeks;

    printf("Enter days value: ");
    scanf("%d", &days);

    years = (days/365);
    months = (days*.0328);
    weeks = (days/7);

    printf("Years is: %d years\n", years);
    printf("Months are: %d months\n", months);
    printf("Weeks are: %d weeks", weeks);

    return 0;
}
