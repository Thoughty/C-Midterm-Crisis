#include<stdio.h>
main(int argc, char const *argv[])
{
    int second,hour,minute,a,b,c;
    scanf("%d",&second);
    a=second;
    b=second;
    hour=a/3600;
    minute=(b-(hour*3600))/60;
    second=second-((hour*3600)+(minute*60));


    printf("Hours:Minutes:second - %d:%d:%d",hour,minute,second);



    return 0;
}
