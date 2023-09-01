//leap year..
#include<stdio.h>
int isleapyear(int year)
{
    if((year%400==0)||((year%4==0)&&(year%100!=0)))
        return 1;
    else
        return 0;
}
int daysInyear(int year)
{
    if(isleapyear(year))
        return 366;
    else
        return 365;
}
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    int result=daysInyear(year);
    if(isleapyear(year))
        printf("%d is a leap year with %d days",year,result);
    else
        printf("%d is not a leap year with %d days",year,result);
    return 0;
}

