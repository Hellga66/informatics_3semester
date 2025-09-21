#include <stdio.h>

int is_leap_year(int year)
{
    return (year % 4 == 0);
}

float yearfrac(int year, int day)
{
    int days_in_year = is_leap_year(year) ? 366 : 365;
    return (float)(day) / (float)days_in_year;
}

int main()
{
    printf("%.5f\n", yearfrac(2019, 300));  
    printf("%.5f\n", yearfrac(2019, 100));  
    printf("%.5f\n", yearfrac(2020, 100));  
}