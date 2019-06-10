#include<stdio.h>
main(int argc, char const *argv[])
{
    int date,a,b,c,year,week,day;
    scanf("%d",&date);
    a=date;
    b=date;
    c=date;
    year=a/365;
    week=(b-(year*365))/7;
    day=(c-((year*365)+(week*7)));
    printf("Years : %d\nWeeks : %d\nDays  : %d",year,week,day);
    
    return 0;
}
